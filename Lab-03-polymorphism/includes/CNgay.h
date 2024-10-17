#include <iostream>

using namespace std;

#ifndef CNgay_H
#define CNgay_H
class CNgay {
    private:
        int ng;
        int th;
        int nm;
    public:
        CNgay();
        CNgay(int day, int month, int year);
        CNgay(const CNgay &ngay);
        friend istream& operator >> (istream &is, CNgay &ngay);
        friend ostream& operator << (ostream &os, CNgay &ngay);
        //CNgay KeTiep();
        int KTNhuan();
};

#endif