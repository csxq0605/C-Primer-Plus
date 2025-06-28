#ifndef WINE_H_
#define WINE_H_
#include <string>
#include <valarray>

typedef std::valarray<int> ArrayInt;
class Wine : private std::pair<ArrayInt, ArrayInt>, private std::string{
    private:
        int years_count;
        typedef std::pair<ArrayInt, ArrayInt> PairArray;
    public:
        Wine(const char * l, int y, const int yr[], const int bot[]);
        Wine(const char * l, int y);
        Wine();
        ~Wine();
        void GetBottles();
        const std::string & Label() {return (const std::string &) (*this);}
        int sum() const {return (*this).second.sum();}
        void Show() const;
};
#endif