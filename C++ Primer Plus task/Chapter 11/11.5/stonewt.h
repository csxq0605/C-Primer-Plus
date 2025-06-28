#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt{
    public:
        enum Mode {STN, LBS_INT, LBS_DOUBLE};
    private:
        static const int Lbs_per_stn = 14;
        int stone;
        double pds_left;
        double pounds;
        Mode mode;
    public:
        Stonewt(Mode form = STN);
        Stonewt(double pd, Mode form = LBS_DOUBLE);
        Stonewt(int stn, double pd, Mode form = STN);
        void set_mode(Mode form);
        Stonewt operator +(const Stonewt & s) const;
        Stonewt operator -(const Stonewt & s) const;
        Stonewt operator *(double n) const;
        friend Stonewt operator *(double n, const Stonewt & s);
        friend std::ostream & operator <<(std::ostream & os, const Stonewt & s);
};
#endif