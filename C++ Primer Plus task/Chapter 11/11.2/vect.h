#ifndef VECT_H_
#define VECT_H_
#include <iostream>
namespace VECTOR{
    class Vector{
        public:
            enum Mode {RECT, POL};
        private:    
            double x;
            double y;
            Mode mode;
        public:
            Vector();
            Vector(double a, double b, Mode form = RECT);
            double xval() const {return x;}
            double yval() const {return y;}
            double magval() const;
            double angval() const;
            void polar_mode();
            void rect_mode();
            Vector operator +(const Vector & v) const;
            Vector operator -(const Vector & v) const;    
            Vector operator -() const;
            Vector operator *(double n) const;
            friend Vector operator *(double n, const Vector & v);
            friend std::ostream & operator <<(std::ostream & os, const Vector & v);
    };
}
#endif