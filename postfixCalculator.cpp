// Eric Chun - jc2ppp - 9/20/20 - postfixCalculator.cpp

#include <iostream>
#include "postfixCalculator.h"
#include "stack.h"
using namespace std;

postfixCalculator::postfixCalculator(){
}

bool postfixCalculator::checkEmpty() const{
  if (calc.empty()){
    cout << "empty stack error" << endl;
    exit(-1);
    return true;
  }
  return false;
}

bool postfixCalculator::isOperator(string s){
  return s == "+" || s == "-" || s == "/" || s == "*" || s == "~";
}

void postfixCalculator::evaluate(){
  string token;
  while (cin >> token){
    if (!isOperator(token)){
      calc.push(std::stoi(token));
    } else {
      if (token == "~"){
	int c = calc.top();
	calc.pop();
	calc.push(-c);
      } else{
	checkEmpty();
	int b = calc.top();
	calc.pop();      
	checkEmpty();
	int a = calc.top();
	calc.pop();
      
	if (token == "+"){
	  calc.push(a + b);
	}
	if (token == "-"){
	  calc.push(a - b);
	}
	if (token == "*"){
	  calc.push(a * b);
	}
	if (token == "/"){
	  calc.push(a / b);
	}
      }
    }
  }
  cout << calc.top() << endl;
}
