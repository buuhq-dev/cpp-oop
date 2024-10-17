#include <iostream>
#include "CNgay.h"

CNgay::CNgay(){
    ng = 1; th = 1; nm = 1900;
}
CNgay::CNgay(int day, int month, int year){
    ng = day; th = month; nm = year;
}
CNgay::CNgay(const CNgay &ngay){
    ng = ngay.ng; th = ngay.th; nm = ngay.nm;
}

istream& operator >> (istream &is, CNgay &ngay){
    cout << "Nhap ngay: "; is >> ngay.ng;
    cout << "Nhap thang: "; is >> ngay.th;
    cout << "Nhap nam: "; is >> ngay.nm;
    return is;
}
ostream& operator << (ostream &os, CNgay &ngay){
    os << "Ngay: " << ngay.ng << "-" << ngay.th << "-" << ngay.nm << endl;
    return os;
}

int CNgay::KTNhuan(){
    if(nm%4==0 && nm%100!=0)
        return 1;
    if(nm%400==0)
        return 1;
    return 0;
}