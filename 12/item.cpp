#include "item.h"
  
Item::Item(string name, unsigned int value)
     : name_(name),
       value_(value){
             
    }
/*
 * Accessor for name_
 * @return string - The name_ value
 */
string Item::name() const
{
    return name_;
}

/*
 * Accessor for value_
 * @return unsigned int - The value_ value
 */
unsigned int Item::value() const
{
    return value_;
}

/*
 * Mutator for name_
 * @param string name - The string to set name_ to
 */
void Item::set_name(string name)
{
    name_ = name;
}

/*
 * Mutator for value_
 * @param unsigned int value - The value to set value_ to
 */
void Item::set_value(unsigned int value)
{
    value_ = value;
}

/*
 * function ToString()
 * @return string containing name_, $value_
 * example: "shoes, $25"
 */
string Item::ToString()
{
    std::stringstream ss;
    ss.clear();
    ss.str();
    
    ss << name_ << ", $" << value_;
    
    string some_string = ss.str();
    return some_string;
}

//int main()
//{
    
//}
