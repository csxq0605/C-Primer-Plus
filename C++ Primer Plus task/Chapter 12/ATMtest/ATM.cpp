#include "ATM.h"
#include <cstdlib>

void Customer::set(long when){
    processtime = rand() % 3 + 1;
    arrive = when;
}

Queue::~Queue(){
    Node * temp;
    while (front != nullptr){
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::enqueue(const Item & item){
    if (isfull())
        return false;
    Node * add = new Node {item, nullptr};
    items++;
    if (front == nullptr)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}

bool Queue::dequeue(Item & item){
    if (isempty())
        return false;
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = nullptr;
    return true;
}