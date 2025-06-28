#include "stonewt.h"

Stonewt::Stonewt(Mode form){
    stone = pounds = pds_left = 0;
    mode = form;
}

Stonewt::Stonewt(double pd, Mode form){
    stone = int(pd) / Lbs_per_stn;
    pds_left = int(pd) % Lbs_per_stn + pd - int(pd);
    pounds = pd;
    mode = form;
}

Stonewt::Stonewt(int stn, double pd, Mode form){
    stone = stn;
    pds_left = pd;
    pounds = stn * Lbs_per_stn + pd;
    mode = form;
}

void Stonewt::set_mode(Mode form){
    mode = form;
}

Stonewt Stonewt::operator +(const Stonewt & s) const{
    return Stonewt(pounds + s.pounds);
} 

Stonewt Stonewt::operator -(const Stonewt & s) const{
    return Stonewt(pounds - s.pounds);
}

Stonewt Stonewt::operator *(double n) const{
    return Stonewt(pounds * n);
}

Stonewt operator *(double n, const Stonewt & s){
    return s * n;
}

std::ostream & operator <<(std::ostream & os, const Stonewt & s){
    if(s.mode == Stonewt::STN){
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    }
    else if(s.mode == Stonewt::LBS_INT){
        os << int(s.pounds) << " pounds\n";
    }
    else if(s.mode == Stonewt::LBS_DOUBLE){
        os << s.pounds << " pounds\n";
    }
    return os;
}