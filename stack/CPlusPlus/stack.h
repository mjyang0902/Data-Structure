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
  ~stack();
  void push(t);
  t pop();
};

template <typename t>
stack<t>::stack(int size){
  arr = new t[size];
  top = -1;
  length = size;
}

template <typename t>
stack<t>::~stack(){
  delete [] arr;
}

template <typename t>
bool stack<t>::empty(){
  return (top == -1);
}

template <typename t>
bool stack<t>::full(){
  return (top == length-1);
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
