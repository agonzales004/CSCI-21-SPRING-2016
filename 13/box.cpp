#ifndef BOX_H
#define BOX_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
using std::string;
using std::ostream;
using std::stringstream;


template<typename T>
class Box {
 public:
 
 Box(T newContents)
 {
     contents = newContents;
 }
 
 T getContents()
 {
     return contents;
 }
 
 void setContents(const T value)
{
    contents = value;
}
 
 friend ostream& operator <<(ostream &out, const Box<T> &output)
 {
   out << output;
   return out;  
 }

 
 private:
    T contents;
};

template<class T>
T Sum(T values[], unsigned int size)
{
    T sum = T();
    
    for (int i = 0; i < size; i++)
    {
        sum += values[i];
    }
    
    return sum;
}



// REST OF HEADER GUARD GOES HERE
#endif