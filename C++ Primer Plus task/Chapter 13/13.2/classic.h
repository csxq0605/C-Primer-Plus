#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd{
    private:
        char * performers;
        char * label;
        int selections;
        double playtime;
    public:
        Cd(const char * s1, const char * s2, const int n, const double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd();
        virtual void Report() const;
        virtual Cd & operator =(const Cd & d);
};

class Classic: public Cd{
    private:
        char * main_work;
    public:
        Classic(const char * s1, const char * s2, const char * s3, const int n, const double x);
        Classic(const Classic & c);
        Classic();
        virtual ~Classic();
        virtual void Report() const;
        virtual Classic & operator =(const Classic & c);
};
#endif