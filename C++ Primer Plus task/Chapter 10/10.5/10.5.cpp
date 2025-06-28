#include <iostream>
#include <cstring>
#include "10.5.h"

Stack::Stack(){
    top = 0;
}

bool Stack::isempty() const{
    return top == 0;
}

bool Stack::isfull() const{
    return top == MAX;
}

void Stack::push(const Item & item){
    if(top < MAX){
        stack[top++] = item;
    }
    else{
        std::cout << "Stack is full\n";
    }
}

Item Stack::pop(){
    if(top > 0){
        return stack[--top];
    }
    else{
        std::cout << "Stack is empty\n";
        customer temp {"No name", 0};
        return temp;
    }
}