#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H
#include "listNode.h"
template<typename DATATYPE>
class SingleLinkedList
{
protected:
    ListNode<DATATYPE>* _head;
    ListNode<DATATYPE>* _current;
    ListNode<DATATYPE>* _prev;
    unsigned int _count = 0;
public:
    const unsigned int& count = _count;
    
};
#endif
