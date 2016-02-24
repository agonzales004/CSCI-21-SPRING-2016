/*
 * Name        : Anthony Gonzales
 * 
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

// Add any includes and using statements Here
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

// Declare Function Prototypes Here (What goes above main)
/*
 * This function will check to make sure all characters in a given string are
 * alphabetic. It returns true if the string is all alphabetic, otherwise it 
 * returns false. The empty string should also return false.
 */
bool CheckAlphabetic(const string &someString);
/*
 * This function will count the number of words (delimited by space characters) 
 * in a string. Assume the parameter will never have multiple spaces back-to-back
 * and will never begin or end with spaces).
 */
int CountWords(string CountString);
/*
 * This function will perform a Caesar Cipher Shift. If the string contains any
 * non-alpha characters do not perform the encryption and return false. Otherwise 
 * perform the encryption and return true.
 */
bool EncryptString(string &ThisString, int ShiftChar);
/*
 * This function decrypts a Caesar Cipher shift. If the string contains any 
 * non-alpha characters do not perform the encryption and return false. Otherwise 
 * perform the encryption and return true.
 */
bool DecryptString(string &StringCrypt, int CharShift);
/*
 * This function will compute the mean average of the values in the array.
 * The array will always be at least size of 1.
 */
double ComputeAverage(double DubArray[], unsigned int ArraySize);
/*
 * This function will find and return the smallest value in an array. The array
 * will always be at least of size 1.
 */
double FindMinValue(double DubArray[], unsigned int ArraySize);
/*
 * This function will find and return the largest value in an array. The array
 * will always be at least of size 1.
 */
double FindMaxValue(double DubArray[], unsigned int ArraySize);

#endif /* ASSIGNMENT_1_H */