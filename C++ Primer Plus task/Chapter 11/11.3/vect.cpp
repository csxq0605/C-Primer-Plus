#include <cmath>
#include "vect.h"

namespace VECTOR{
    const double REG_TO_DEG = 45.0 / std::atan(1.0);

    void Vector::set_x(){
        x = mag * std::cos(ang);
    }
    
    void Vector::set_y(){
        y = mag * std::sin(ang);
    }

    void Vector::set_mag(){
        mag = std::sqrt(x * x + y * y);
    }

    void Vector::set_ang(){
        if (x == 0.0 && y == 0.0){
            ang = 0.0;
        }
        else{
            ang = std::atan2(y, x);
        }
    }

    Vector::Vector(){
        x = y = mag = ang = 0;
        mode = RECT;
    }

    Vector::Vector(double a, double b, Mode form){
        mode = form;
        if (mode == RECT){
            x = a;
            y = b;
            set_mag();
            set_ang();
        }
        else if (mode == POL){
            mag = a;
            ang = b / REG_TO_DEG;
            set_x();
            set_y();
        }
        else{
            std::cout << "Incorrect 3rd argument to Vector() -- ";
            std::cout << "vector set to 0\n";
            Vector();
        }
    }

    void Vector::polar_mode(){
        mode = POL;
    }

    void Vector::rect_mode(){
        mode = RECT;
    }

    Vector Vector::operator +(const Vector & v) const{
        return Vector(x + v.x, y + v.y);
    }

    Vector Vector::operator -(const Vector & v) const{
        return Vector(x - v.x, y - v.y);
    }

    Vector Vector::operator -() const{
        return Vector(-x, -y);
    }

    Vector Vector::operator *(double n) const{
        return Vector(n * x, n * y);
    }

    Vector operator *(double n, const Vector & v){
        return v * n;
    }

    std::ostream & operator <<(std::ostream & os, const Vector & v){
        if (v.mode == Vector::RECT){
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        }
        else if (v.mode == Vector::POL){
            os << "(m, a) = (" << v.mag << ", " << v.ang * REG_TO_DEG << ")";
        }
        else{
            os << "Vector object mode is invalid";
        }
        return os;
    }
}