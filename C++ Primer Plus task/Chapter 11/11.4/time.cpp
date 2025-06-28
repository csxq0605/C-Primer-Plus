#include "time.h"

Time::Time(){
    hours = minutes = 0;
}

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

void Time::AddMin(int m){
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h){
    hours += h;
}

void Time::Reset(int h, int m){
    hours = h;
    minutes = m;
}

Time operator +(const Time & t1, const Time & t2){
    return Time(t1.hours + t2.hours + (t1.minutes + t2.minutes) / 60, (t1.minutes + t2.minutes) % 60);
}

Time operator -(const Time & t1, const Time & t2){
    int total1 = t1.minutes + t1.hours * 60;
    int total2 = t2.minutes + t2.hours * 60;
    return Time((total1 - total2) / 60, (total1 - total2) % 60);
}

Time operator *(const Time & t, double n){
    long total = t.minutes * n + t.hours * n * 60;
    return Time(total / 60, total % 60);
}

Time operator *(double n, const Time & t){
    return t * n;
}

std::ostream & operator <<(std::ostream & os, const Time & t){
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}