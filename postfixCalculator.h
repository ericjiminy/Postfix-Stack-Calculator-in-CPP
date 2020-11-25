// Eric Chun - jc2ppp - 9/20/20 - postfixCalculator.h

#ifndef POSTFIXCALC_H
#define POSTFIXCALC_H

#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

class postfixCalculator{
 public:
  stack calc;
  
  postfixCalculator();
  bool isOperator(string s);
  bool checkEmpty() const;
  void evaluate();
};

#endif
