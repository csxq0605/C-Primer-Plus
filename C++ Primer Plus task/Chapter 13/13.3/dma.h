#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class DMA{
    private:
        char * label;
        int rating;
    protected:
        const char * getLabel() const { return label; }
        int getRating() const { return rating; }
    public:
        DMA(const char * l, int r);
        DMA(const DMA & d);
        virtual ~DMA();
        virtual DMA & operator =(const DMA & d);
        virtual void ViewDMA() const = 0;
};

class baseDMA : public DMA{
    public:
        baseDMA(const char * l = "null", int r = 0);
        baseDMA(const baseDMA & bd);
        virtual ~baseDMA();
        virtual baseDMA & operator =(const baseDMA & bd);
        virtual void ViewDMA() const;
};

class lacksDMA : public DMA{
    private:
        static const int COL_LEN = 40;
        char color[COL_LEN];
    public:
        lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
        lacksDMA(const char * c, const DMA & d);
        lacksDMA(const lacksDMA & ld);
        virtual ~lacksDMA();
        virtual lacksDMA & operator =(const lacksDMA & ld);
        virtual void ViewDMA() const;
};

class hasDMA : public DMA{
    private:
        char * style;
    public:
        hasDMA(const char * s = "none", const char * l = "null", int r = 0);
        hasDMA(const char * s, const DMA & d);
        hasDMA(const hasDMA & hd);
        virtual ~hasDMA();
        virtual hasDMA & operator =(const hasDMA & hd);
        virtual void ViewDMA() const;
};
#endif