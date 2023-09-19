#ifdef LIST_H
#define LIST_H

template <typename t> class node{
public:
  t key;
  node* next;
  node* prev;
  node(t);
  ~node();
};

template <typename t> node<t>::node(t k){
  key = k;
  next = NULL;
  prev = NULL;
}

template <typename t> node<t>::~node(){
  delete next;
  delete prev;
}

template <typename t> class List{
  node* head;
public:
  List();
  ~List();
  Search(t);
  Insert(t);
  Delete(node*);
};

template <typename t> List(){
  head = NULL;
}

template <typename t> ~List(){
  delete NULL;
}

template <typename t> Search(t k){

}
#endif
