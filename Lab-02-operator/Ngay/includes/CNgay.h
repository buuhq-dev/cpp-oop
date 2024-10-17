#include <iostream>

using namespace std;

class CNgay {
    private:
        int ng;
        int th;
        int nm;
    public:
        CNgay();
        CNgay(int day, int month, int year);
        CNgay(const CNgay &ngay);
        ~CNgay();
        friend istream& operator >> (istream &is, CNgay &ngay);
        friend ostream& operator << (ostream &os, CNgay &ngay);
        
        int KTNhuan();
        CNgay KhoiTao(int sttTrongNam);
        int STTTrongNam();
        CNgay& operator++();
        CNgay operator++(int);
        CNgay& operator --();
        CNgay operator--(int);
        //CNgay KeTiep();
        
};