#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <cstddef>
#include <iostream>

template <typename T>
class Node{
    public:
        T data;
        Node<T>* next;
};


template <typename T>
void print_list(Node<T>* L);

template <typename T>
void push_back(Node<T>* L, T data);

template <typename T>
void print_list(Node<T>* L){
    Node<T>* head = L;
    
    while (head != NULL){
        std::cout << head->data << "\t";
        head = head->next;
    }
}

template <typename T>
void push_back(Node<T>** L, T data){
    Node<T>* entry = new Node<T>();
    Node<T>* head = *L;
    entry->data = data;
    entry->next = NULL;

    if (head == NULL){
        *L = entry;
    }
    else {
        while (head->next){
            head = head->next;
        }

        head->next = entry;
    }
}

#endif