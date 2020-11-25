// Eric Chun - jc2ppp - 9/23/20 - stack.h

#ifndef STACK_H
#define STACK_H

#include "stacknode.h"

class stack {
 public:
  stack();
  void push(int e);
  void pop();
  int top() const;
  bool empty() const;

 private:
  int count;
  stacknode* head;
  stacknode* tail;
};

#endif
