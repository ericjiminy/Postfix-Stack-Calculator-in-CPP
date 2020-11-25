// Eric Chun - jc2ppp - 9/23/20 - stack.cpp

#include "stack.h"

stack::stack(){
  head = new stacknode();
  tail = new stacknode();
  
  head->next = tail;
  head->previous = 0;
  tail->next = 0;
  tail->previous = head;
  
  count = 0;
}

void stack::push(int e){
  stacknode* newNode = new stacknode();
  
  newNode->value = e;
  newNode->next = tail;
  newNode->previous = tail->previous;
  tail->previous->next = newNode;
  tail->previous = newNode;
  
  count++;
}

void stack::pop(){
  stacknode* current = tail->previous;
  tail->previous = current->previous;
  current->previous->next = tail;
  delete current;
  count--;
}

int stack::top() const{
  return tail->previous->value;
}

bool stack::empty() const{
  return count == 0;
}
