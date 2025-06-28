#include <cmath>
#include "vect.h"

namespace VECTOR{
    const double REG_TO_DEG = 45.0 / std::atan(1.0);

    Vector::Vector(){
        x = y = 0;
        mode = RECT;
    }

    Vector::Vector(double a, double b, Mode form){
        mode = form;
        if (mode == RECT){
            x = a;
            y = b;
        }
        else if (mode == POL){
            double mag = a;
            double ang = b / REG_TO_DEG;
            x = mag * std::cos(ang);
            y = mag * std::sin(ang);
        }
        else{
            std::cout << "Incorrect 3rd argument to Vector() -- ";
            std::cout << "vector set to 0\n";
            Vector();
        }
    }

    double Vector::magval() const{
        return std::sqrt(x * x + y * y);
    }

    double Vector::angval() const{
        if (x == 0.0 && y == 0.0){
            return 0.0;
        }
        else{
            return std::atan2(y, x) * REG_TO_DEG;
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
            os << "(m, a) = (" << v.magval() << ", " << v.angval()<< ")";
        }
        else{
            os << "Vector object mode is invalid";
        }
        return os;
    }
}