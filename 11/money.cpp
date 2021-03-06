#include "money.h"

// The Constructor, Accessors and Mutators have been defined for you
Money::Money(int dollars, int cents)
      : dollars_(dollars),
        cents_(cents) {
}

int Money::dollars() const {
    return dollars_;
}

int Money::cents() const {
    return cents_;
}

void Money::set_dollars(int dollars) {
  dollars_ = dollars;
}

void Money::set_cents(int cents) {
  cents_ = cents;
}
  /*
   * Overload of + operator. This is a friend function.
   * @param Money amount1 - The first object to add
   * @param Money amount2 - The second object to add
   * @return Money - The two objects added together
   */

// This function definition provided as an example and is FULLY COMPLETE
const Money operator +(const Money& amount1, const Money& amount2) 
{
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Add all the cents together
  int sum_all_cents = all_cents1 + all_cents2;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(sum_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negate final dollars and cents
  if (sum_all_cents < 0) {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

// REST OF CLASS FUNCTION DEFINITIONS GO HERE
  /*
   * Overload of binary - operator. This is a friend function.
   * @param Money amount1 - The object to subtract from
   * @param Money amount2 - The object to be subtracted
   * @return Money - The result of the subtraction
   */
const Money operator -(const Money& amount1, const Money& amount2)
{
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Subtract the cents from each other
  int difference_all_cents = all_cents1 - all_cents2;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(difference_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negate final dollars and cents
  if (difference_all_cents < 0) {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

  /*
   * Overload of == operator. This is a friend function.
   * @param Money amount1 - The first object to compare
   * @param Money amount2 - The second object to compare
   * @return bool - True if the objects have the same values, otherwise false
   */
bool operator ==(const Money &amount1, const Money &amount2)
{
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // compare the two 
  if (all_cents1 == all_cents2)
  {
    return true;
  }
  else
  {
    return false;
  }

}

  /*
   * Overload of unary - operator. This is a friend function.
   * @param Money amount - The object to negate
   * @return Money - The result of the negation of the two member variables
   */
  const Money operator -(const Money &amount)
  {
    // Get all the cents of object
    int all_cents = amount.cents_ + amount.dollars_ * 100;
    //break the cents up into dollar and cent variables
    int final_dollars = all_cents / 100;
    int final_cents = all_cents % 100;
    //make the two negative and return them 
    final_dollars = -final_dollars;
    final_cents = -final_cents;
    
    return Money(final_dollars, final_cents);
    
  }

  /*
   * Overload of << operator.
   * Outputs the money values to the output stream.
   * Should be in the form $x.xx
   * @uses setw()
   * @uses setfill()
   * @param ostream &out - The ostream object to output to
   * @param Money amount - The Money object to output from.
   * @return ostream& - The ostream object to allow for chaining of <<
   */
  ostream& operator <<(ostream &out, const Money &amount)
  {
  // Get all the cents of object 2
  int all_cents = amount.cents_ + amount.dollars_ * 100;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negate final dollars and cents
/*
  if (all_cents < 0) 
  {
    final_dollars = -final_dollars;
    
  }
 */
 
 if (all_cents < 0)
 {
      out << "$-" << setfill('0')<<setw(0);
      out << final_dollars << '.'<<setfill('0') << setw(2) << final_cents;
      return out;
 }
 else
      out << "$" << setfill('0')<<setw(0);
      out << final_dollars << '.'<<setfill('0') << setw(2) << final_cents;
      return out;
  

}  
