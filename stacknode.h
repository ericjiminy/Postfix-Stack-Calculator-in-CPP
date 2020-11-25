// Eric Chun - jc2ppp - 9/23/20 - stacknode.h

#ifndef STACKNODE_H
#define STACKNODE_H

class stacknode{
 public:
    stacknode();

 private:
    int value;
    stacknode* next;
    stacknode* previous;

    friend class stack;
};

#endif
