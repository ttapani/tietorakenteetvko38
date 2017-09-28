#ifndef EXTENDED_STACK_H
#define EXTENDED_STACK_H

#include "Stack.h"

class Stack;

class Extended_stack : public Stack {

public:
   Extended_stack();
   void clear(); //  Reset the stack to be empty.
   bool full() const; //  If the stack is full, return true; else return false.
   int size() const;   //  Return the number of entries in the stack.
};

#endif