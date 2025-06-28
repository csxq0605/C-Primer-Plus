#include "stonewt.h"

Stonewt::Stonewt(){
    stone = pounds = pds_left = 0;
}

Stonewt::Stonewt(double pd){
    stone = int(pd) / Lbs_per_stn;
    pds_left = int(pd) % Lbs_per_stn + pd - int(pd);
    pounds = pd;
}

Stonewt::Stonewt(int stn, double pd){
    stone = stn;
    pds_left = pd;
    pounds = stn * Lbs_per_stn + pd;
}

bool Stonewt::operator ==(const Stonewt & s) const{
    return pounds == s.pounds;
}

bool Stonewt::operator !=(const Stonewt & s) const{
    return pounds != s.pounds;
}

bool Stonewt::operator >=(const Stonewt & s) const{
    return pounds >= s.pounds;
}

bool Stonewt::operator <=(const Stonewt & s) const{
    return pounds <= s.pounds;
}

bool Stonewt::operator >(const Stonewt & s) const{
    return pounds > s.pounds;
}

bool Stonewt::operator <(const Stonewt & s) const{
    return pounds < s.pounds;
}

std::ostream & operator <<(std::ostream & os, const Stonewt & s){
    os << s.pounds << " pounds\n";
    return os;
}