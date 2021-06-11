#ifndef LIST_NODE_H
#define LIST_NODE_H
template <typename DATATYPE>
class ListNode
{
protected:
    DATATYPE _data;
    ListNode* _next;
    ListNode* _prev;
    ListNode(const ListNode& rhs)=delete;
    ListNode& operator=(const ListNode& rhs)=delete;
public:
    ListNode(DATATYPE data):_data(data), _next(nullptr), _prev(nullptr){}
    ListNode(DATATYPE data, ListNode* prev, ListNode* next):_data(data), _next(next), _prev(prev){}
    const DATATYPE& data = _data;
    const ListNode* next = _next;
    const ListNode* prev = _prev;
};
#endif
