#ifndef list_h
#define list_h

typedef int Item;

void visitItem(Item & item);

class List{
    private:
        static const int MAX = 10;
        Item items[MAX];
        int top;
    public:
        List();
        bool add(const Item & item);
        bool isempty() const;
        bool isfull() const;
        void visit(void (*pf)(Item & item));
};
#endif