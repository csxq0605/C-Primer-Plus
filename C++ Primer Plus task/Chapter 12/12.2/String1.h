#ifndef STRING_H_
#define STRING_H_
#include <iostream>

class String{
    private:
        char * str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
    public:
        String();
        String(const char * s);
        String(const String & s);
        ~String();
        int length() const {return len;}
        void Stringlow();
        void Stringup();
        int count(char c) const;
        String & operator =(const String & s);
        String & operator =(const char * s);
        char & operator [](int i);
        const char & operator[](int i) const;
        friend bool operator <(const String & st1, const String & st2);
        friend bool operator >(const String & st1, const String & st2);
        friend bool operator ==(const String & st1, const String & st2);
        friend String operator +(const String & s1, const String & s2);
        friend std::ostream & operator <<(std::ostream & os, const String & st);
        friend std::istream & operator >>(std::istream & is, String & st);
        static int HowMany();
};
#endif