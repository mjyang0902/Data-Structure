#ifndef QUEUE_H
#define QUEUE_H

template <typename t>
class queue {
private:
  int head;
  int tail;
  int length;
  t* arr;
  bool full();
  bool empty();
  
public:
  queue(int);
  ~queue();
  void enqueue(t);
  t dequeue();
};

template <typename t>
queue<t>::queue(int size){
  arr = new t[size];
  head = 0;
  tail = 0;
  length = size;
}

template <typename t>
queue<t>::~queue(){
  delete [] arr;
}

template <typename t>
bool queue<t>::full(){
  if(head==tail+1 || (tail==length-1 && head == 0)){
    return true;
  }
  else{
    return false;
  }
}

template <typename t>
bool queue<t>::empty(){
  if(head==tail){
    return true;
  }
  else{
    return false;
  }
}

template <typename t>
void queue<t>::enqueue(t temp){
  if(full()){
    throw std::overflow_error("queue overflow!");
  }
  else{
    arr[tail] = temp;
    if(tail == length-1){
      tail = 0;
    }
    else{
      tail = tail + 1;
    }
  }
}

template <typename t>
t queue<t>::dequeue(){
  if(empty()){
    throw std::underflow_error("queue underflow!");
  }
  else{
    t temp = arr[head];
    if(head == length-1){
      head = 0;
    }
    else{
      head = head + 1;
    }
    return temp;
  }
}
#endif
