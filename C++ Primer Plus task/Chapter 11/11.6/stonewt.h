#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt{
    private:
        static const int Lbs_per_stn = 14;
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt();
        Stonewt(double pd);
        Stonewt(int stn, double pd);
        bool operator ==(const Stonewt & s) const;
        bool operator !=(const Stonewt & s) const;
        bool operator >=(const Stonewt & s) const;
        bool operator <=(const Stonewt & s) const;
        bool operator >(const Stonewt & s) const;
        bool operator <(const Stonewt & s) const;
        friend std::ostream & operator <<(std::ostream & os, const Stonewt & s);
};
#endif