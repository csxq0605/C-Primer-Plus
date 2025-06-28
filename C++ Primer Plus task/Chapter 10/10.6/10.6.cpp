#include <iostream>
#include "10.6.h"

Move::Move(double a, double b){
    x = a;
    y = b; 
}

void Move::showmove() const{
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

Move Move::add(const Move & m){
    Move temp;
    temp.x = this->x + m.x;
    temp.y = this->y + m.y;
    return temp;
}

void Move::reset(double a, double b){
    x = a;
    y = b;
}