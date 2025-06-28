#ifndef QUEUE_H_
#define QUEUE_H_

template <typename T>
class Queue{
    private:
        struct Node{
            T item;
            struct Node * next;
        };
        Node * front;
        Node * rear;
        int items;
        const int qsize;
        Queue(const Queue & q) : qsize(0){}
        Queue & operator=(const Queue & q){return *this;}
    public:
        Queue(int qs = 10) : qsize(qs), front(nullptr), rear(nullptr), items(0){}
        ~Queue();
        bool isempty() const {return items == 0;}
        bool isfull() const {return items == qsize;}
        int queuecount() const {return items;}
        bool enqueue(const T & item);
        bool dequeue(T & item);
};

template <typename T>
Queue<T>::~Queue(){
    Node * temp;
    while (front != nullptr){
        temp = front;
        front = front -> next;
        delete temp;
    }
}

template <typename T>
bool Queue<T>::enqueue(const T & item){
    if (isfull())
        return false;
    Node * add = new Node;
    add -> item = item;
    add -> next = nullptr;
    if (isempty())
        front = add;
    else
        rear -> next = add;
    rear = add;
    items++;
    return true;
}

template <typename T>
bool Queue<T>::dequeue(T & item){
    if (isempty())
        return false;
    item = front -> item;
    Node * temp = front;
    front = front -> next;
    delete temp;
    items--;
    if (isempty())
        rear = nullptr;
    return true;
}
#endif