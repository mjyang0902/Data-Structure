#ifndef STACK_H
#define STACK_H

template <typename t>

class stack{
  int top;
  t* arr;
  bool empty();
  bool full();
  int length;

public:
  stack(int);
  void push(t);
  t pop();
};

#include <iostream>
#include "stack.h"

template <typename t>
stack<t>::stack(int size){
  t *arr = new t[size];
  top = -1;
  length = size;
}

template <typename t>
bool stack<t>::empty(){
 if(top==-1){
    return true;
  }   
  else{
    return false;
  }
}

template <typename t>
bool stack<t>::full(){
  if(top==length-1){
    return true;
  }
  else{
    return false;
  }
}

template <typename t>
void stack<t>::push(t temp){
  if(full()){
    throw std::overflow_error("stack overflow!");
  }
  else{
    top = top+1;
    arr[top] = temp;
  }
}

template <typename t>
t stack<t>::pop(){
  if(empty()){
    throw std::underflow_error("stack underflow!");
  }
  else{
    top = top - 1;
  }
  return arr[top+1];
}

#endif 