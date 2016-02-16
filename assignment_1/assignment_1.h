/*
 * Name        : Anthony Gonzales
 * Author      : FILL IN
 * Description : FILL IN
 * Sources     : FILL IN
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
bool CheckAlphabetic(const string &someString);

int CountWords(string CountString);

bool EncryptString(string &ThisString, int ShiftChar);

bool DecryptString(string &StringCrypt, int CharShift);

double ComputeAverage(double DubArray[], unsigned int ArraySize);

double FindMinValue(double DubArray[], unsigned int ArraySize);

double FindMaxValue(double DubArray[], unsigned int ArraySize);

#endif /* ASSIGNMENT_1_H */