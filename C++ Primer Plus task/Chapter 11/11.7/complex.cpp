#include "complex0.h"

Complex::Complex(){
    real = imaginary = 0.0;
}

Complex::Complex(double r, double i){
    real = r;
    imaginary = i;
}

Complex Complex::operator +(const Complex & c) const{
    return Complex(real + c.real, imaginary + c.imaginary);
}

Complex Complex::operator -(const Complex & c) const{
    return Complex(real - c.real, imaginary - c.imaginary);
}

Complex Complex::operator *(const Complex & c) const{
    return Complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
}

Complex Complex::operator *(double n) const{
    return Complex(real * n, imaginary * n);
}

Complex Complex::operator ~() const{
    return Complex(real, -imaginary);
}

Complex operator *(double n, const Complex & c){
    return c * n;
}

std::istream & operator >>(std::istream & is, Complex & c){
    double r, i;
    std::cout << "real: ";
    if(is >> c.real){
        std::cout << "imaginary: ";
        is >> c.imaginary;
    }
    return is;
}

std::ostream & operator <<(std::ostream & os, const Complex & c){
    os << "(" << c.real << "," << c.imaginary << "i)";
    return os;
}