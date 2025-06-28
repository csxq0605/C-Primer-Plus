#ifndef ATM_H_
#define ATM_H_

class Customer{
    private:
        long arrive;
        int processtime;
    public:
        Customer(){arrive = processtime = 0;}
        void set(long when);
        long when() const {return arrive;}
        int ptime() const {return processtime;}
};

typedef Customer Item;

class Queue{
    private:
        struct Node{Item item; Node * next;};
        static const int Q_SIZE = 10;
        Node * front;
        Node * rear;
        int items;
        const int qsize;
        Queue(const Queue & q) : qsize(0) {}
        Queue & operator =(const Queue & q) {return *this;}
    public:
        Queue(int qs = Q_SIZE) : qsize(qs), front(nullptr), rear(nullptr), items(0) {}
        ~Queue();
        bool isempty() const {return items == 0;}
        bool isfull() const {return items == qsize;}
        int queuecount() const {return items;}
        bool enqueue(const Item & item);
        bool dequeue(Item & item);
};
#endif