#ifndef H_10_5
#define H_10_5

struct customer{
    char fullname[35];
    double payment;
};

typedef customer Item;
class Stack{
    private:
        static const int MAX = 10;
        Item stack[MAX];
        int top;
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        void push(const Item & item);
        Item pop();
};
#endif