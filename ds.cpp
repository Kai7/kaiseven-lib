#include "ds.h"
#include <cstdlib>
#define nullptr NULL

template <class T>
knode<T>::knode(){
    item = nullptr;
    next = nullptr;
}

template <class T>
kstack<T>::kstack(){
    top = new knode<T>();
}

template <class T>
void kstack<T>::push(knode<T> *inode){
    inode->next = top;
    top = inode;

    return;
}

template <class T>
knode<T> * kstack<T>::pop(){
    knode<T> *tmp = top;
    top = top->next;

    return tmp;
}

template <class T>
bool kstack<T>::isEmpty(){
    if(top == nullptr)
        return true;
    return false;
}
