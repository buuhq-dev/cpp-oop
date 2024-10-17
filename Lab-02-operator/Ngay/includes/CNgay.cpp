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
CNgay::~CNgay(){
    cout << "Destruct ...";
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

int CNgay::STTTrongNam(){
    int ngaythang[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(KTNhuan()==1)
        ngaythang[1]=29;
    int stt = 0;
    for(int i=1;i<=th-1;i++)
        stt=stt+ ngaythang[i-1];
    return (stt + ng);
}

CNgay CNgay::KhoiTao(int sttTrongNam){
    int ngaythang[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    CNgay temp(1, 1, nm);
    if(temp.KTNhuan()==1)
        ngaythang[1] = 29;
    temp.th=1;
    while(sttTrongNam - ngaythang[temp.th-1]>0)
    {
        sttTrongNam = sttTrongNam - ngaythang[temp.th-1];
        temp.th++;
     }
     temp.ng = sttTrongNam;
     return temp;
}

CNgay& CNgay::operator++ (){
    int ngaythang[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(KTNhuan()==1)
        ngaythang[1]=29;
    if(ng == ngaythang[th] && th == 12){
        ng = 1; th = 1; nm = nm +1 ;
        return *this;
    }
    int sttTrongNam = STTTrongNam() + 1;
    CNgay temp = KhoiTao(sttTrongNam);
    ng = temp.ng; th = temp.th; nm = temp.nm;
    return *this;
}
CNgay CNgay::operator++ (int){
    CNgay temp = *this;
    ++*this;
    return temp;
}

CNgay& CNgay::operator-- (){
    int ngaythang[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(KTNhuan()==1)
        ngaythang[1]=29;

    int sttTrongNam = STTTrongNam() - 1;
    CNgay temp = KhoiTao(sttTrongNam);
    ng = temp.ng; th = temp.th; nm = temp.nm;
    return *this;
}
CNgay CNgay::operator-- (int){
     CNgay temp = *this;
    --*this;
    return temp;
}