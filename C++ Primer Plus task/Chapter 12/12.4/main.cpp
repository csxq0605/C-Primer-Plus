#include <iostream>
#include "stack.h"

int main(){
    using namespace std;
    Stack st1;
    Stack st2(5);
    Item item;
    cout << "Stack 1: " << endl;
    cout << "Is empty: " << st1.isempty() << endl;
    cout << "Is full: " << st1.isfull() << endl;
    cout << "Push 1: " << st1.push(1) << endl;
    cout << "Push 2: " << st1.push(2) << endl;
    cout << "Push 3: " << st1.push(3) << endl;
    Stack st3 = st1;
    cout << "Stack st3 = st1: " << endl;
    cout << "Stack 3: " << endl;
    cout << "Is empty: " << st3.isempty() << endl;
    cout << "Is full: " << st3.isfull() << endl;
    cout << "Pop 1: " << st3.pop(item) << "  " << item << endl;
    cout << "Pop 2: " << st3.pop(item) << "  " << item << endl;
    cout << "Pop 3: " << st3.pop(item) << "  " << item << endl;
    cout << "Stack 1: " << endl;
    cout << "Is empty: " << st1.isempty() << endl;
    cout << "Is full: " << st1.isfull() << endl;
    cout << "Stack 2: " << endl;
    cout << "Is empty: " << st2.isempty() << endl;
    cout << "Is full: " << st2.isfull() << endl;
    cout << "Push 1: " << st2.push(1) << endl;
    cout << "Push 2: " << st2.push(2) << endl;
    cout << "Push 3: " << st2.push(3) << endl;
    cout << "Push 4: " << st2.push(4) << endl;
    cout << "Push 5: " << st2.push(5) << endl;
    cout << "Push 6: " << st2.push(6) << endl;
    Stack st4;
    st4 = st2;
    cout << "st4 = st2: " << endl;
    cout << "Stack 4: " << endl;
    cout << "Is empty: " << st4.isempty() << endl;
    cout << "Is full: " << st4.isfull() << endl;
    cout << "Pop 1: " << st4.pop(item) << "  " << item << endl;
    cout << "Pop 2: " << st4.pop(item) << "  " << item << endl;
    cout << "Pop 3: " << st4.pop(item) << "  " << item << endl;
    cout << "Pop 4: " << st4.pop(item) << "  " << item << endl;
    cout << "Pop 5: " << st4.pop(item) << "  " << item << endl;
    cout << "Pop 6: " << st4.pop(item) << "  " << item << endl;
    cout << "Stack 2: " << endl;
    cout << "Is empty: " << st2.isempty() << endl;
    cout << "Is full: " << st2.isfull() << endl;
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        continue;
    }
    std::cout << "Bye!\n";
    return 0;
}