#ifndef WINE_H_
#define WINE_H_
#include <string>
#include <valarray>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;
class Wine{
    private:
        std::string name;
        PairArray data;
        int years_count;
    public:
        Wine(const char * l, int y, const int yr[], const int bot[]);
        Wine(const char * l, int y);
        Wine();
        ~Wine();
        void GetBottles();
        std::string & Label() {return name;}
        int sum() const {return data.second.sum();}
        void Show() const;
};
#endif