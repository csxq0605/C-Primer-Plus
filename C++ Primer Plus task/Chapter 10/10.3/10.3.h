#ifndef H_10_3
#define H_10_3
class Golf{
    private:
        static const int Len = 40;
        char fullname[Len];
        int handicap;
    public:
        Golf();
        Golf(const char * name, int hc);
        void setHandicap(int hc);
        void setgolf();
        void showgolf() const;
};
#endif