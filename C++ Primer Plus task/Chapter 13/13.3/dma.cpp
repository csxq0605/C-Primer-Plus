#include <cstring>
#include "dma.h"
using namespace std;

DMA::DMA(const char * l, int r){
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

DMA::DMA(const DMA & d){
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    rating = d.rating;
}

DMA::~DMA(){
    delete [] label;
}

DMA & DMA::operator =(const DMA & d){
    if(this == &d){
        return *this;
    }
    delete [] label;
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    rating = d.rating;
    return *this;
}

baseDMA::baseDMA(const char * l, int r) : DMA(l, r){
}

baseDMA::baseDMA(const baseDMA & bd) : DMA(bd){
}

baseDMA::~baseDMA(){
}

baseDMA & baseDMA::operator =(const baseDMA & bd){
    if(this == &bd){
        return *this;
    }
    DMA::operator =(bd);
    return *this;
}

void baseDMA::ViewDMA() const{
    cout << "Label: " << getLabel() << endl;
    cout << "Rating: " << getRating() << endl;
}

lacksDMA::lacksDMA(const char * c, const char * l, int r) : DMA(l, r){
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const char * c, const DMA & d) : DMA(d){
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const lacksDMA & ld) : DMA(ld){
    strncpy(color, ld.color, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

lacksDMA::~lacksDMA(){
}

lacksDMA & lacksDMA::operator =(const lacksDMA & ld){
    if(this == &ld){
        return *this;
    }
    DMA::operator =(ld);
    strncpy(color, ld.color, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
    return *this;
}

void lacksDMA::ViewDMA() const{
    cout << "Label: " << getLabel() << endl;
    cout << "Rating: " << getRating() << endl;
    cout << "Color: " << color << endl;
}

hasDMA::hasDMA(const char * s, const char * l, int r) : DMA(l, r){
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const DMA & d) : DMA(d){
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hd) : DMA(hd){
    style = new char[strlen(hd.style) + 1];
    strcpy(style, hd.style);
}

hasDMA::~hasDMA(){
    delete [] style;
}

hasDMA & hasDMA::operator =(const hasDMA & hd){
    if(this == &hd){
        return *this;
    }
    DMA::operator =(hd);
    delete [] style;
    style = new char[strlen(hd.style) + 1];
    strcpy(style, hd.style);
    return *this;
}

void hasDMA::ViewDMA() const{
    cout << "Label: " << getLabel() << endl;
    cout << "Rating: " << getRating() << endl;
    cout << "Style: " << style << endl;
}