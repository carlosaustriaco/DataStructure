#include "LinkedList.hpp"
#include <cstddef>

int main(){
    Node<int>* l = NULL;
    push_back(&l, 1);
    push_back(&l, 5);
    push_back(&l, 3);

    print_list(l);
}