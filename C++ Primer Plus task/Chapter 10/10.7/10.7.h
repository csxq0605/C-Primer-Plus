#ifndef H_10_7
#define H_10_7

class Plorg{
    private:
        char name[20];
        int CI;
    public:
        Plorg(const char * n = "Plorga", int c = 50);
        void show() const;
        void setCI(int c);
};
#endif