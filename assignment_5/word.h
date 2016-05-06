/*
 * Name        : word.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef WORD_H
#define WORD_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;


class Word {
 public:
  /*
   * Default Construcotr
   * 
   */
  Word();

  /*
   * Overloaded Constructor
   * with string parameter (representing the “word”)
   * 
   */
  Word(string someWord);

  /*
   * Destructor
   * 
   */
  ~Word();

  /*
   * Set for word
   */
  void set_word(string someWord);

  /*
   * Get for word
   */
  string get_word() const;
  

 private:
  //string contain the word assigned to the Word instance
  string word;
  
  //an unsigned int (defaults to 1) containing the count of 
  //the number of instances the “word” was encountered in the input
  unsigned int count;
};

#endif