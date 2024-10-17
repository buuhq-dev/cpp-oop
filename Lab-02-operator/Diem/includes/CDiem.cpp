#include "CDiem.h"
#include <iostream>
#include <math.h>

using namespace std;

CDiem::CDiem(){
    x = 0; y = 0;
}
CDiem::CDiem(float x1, float y1){
    x = x1; y = y1;
}
CDiem::CDiem(const CDiem &d){
    x =  d.x;
    y = d.y;
}
CDiem::~CDiem(){
    cout << "destruct CDiem...";
}

istream& operator >> (istream &is, CDiem &d){
    cout << "Nhap x: "; is >> d.x;
    cout << "Nhap y: "; is >> d.y;
    return is;
}
ostream& operator << (ostream &os, CDiem &d){
    os << "Diem co toa do la: (" << d.x << "," << d.y << ")\n";
    return os;
}

float CDiem::KhoangCach(CDiem P){
    return sqrt((x-P.x)*(x-P.x) + (y-P.y)*(y-P.y));
}

CDiem CDiem::operator+ (CDiem diem){
    CDiem kq;
    kq.x = x + diem.x;
    kq.y = y + diem.y;
    return kq;
}
CDiem CDiem::operator+= (CDiem diem){
    CDiem kq;
    kq.x = x + diem.x;
    kq.y = y + diem.y;
    return kq;
}
CDiem CDiem::operator- (CDiem diem){
    CDiem kq;
    kq.x = x - diem.x;
    kq.y = y - diem.y;
    return kq;
}
CDiem CDiem::operator-= (CDiem diem){
    CDiem kq;
    kq.x = x - diem.x;
    kq.y = y - diem.y;
    return kq;
}

float CDiem::KhoangCachGoc(){
    return sqrt(x*x + y*y);
}

int CDiem::operator>(CDiem P){
    float a = KhoangCachGoc();
    float b = P.KhoangCachGoc();
    if(a>b)
        return 1;
    return 0;
}
int CDiem::operator<(CDiem P){
    float a = KhoangCachGoc();
    float b = P.KhoangCachGoc();
    if(a < b)
        return 1;
    return 0;
}
int CDiem::operator>=(CDiem P){
    float a = KhoangCachGoc();
    float b = P.KhoangCachGoc();
    if(a >= b)
        return 1;
    return 0;
}
int CDiem::operator<=(CDiem P){
    float a = KhoangCachGoc();
    float b = P.KhoangCachGoc();
    if(a <= b)
        return 1;
    return 0;
}
int CDiem::operator==(CDiem P){
    float a = KhoangCachGoc();
    float b = P.KhoangCachGoc();
    if(a == b)
        return 1;
    return 0;
}
int CDiem::operator!=(CDiem P){
    float a = KhoangCachGoc();
    float b = P.KhoangCachGoc();
    if(a != b)
        return 1;
    return 0;
}

CDiem& CDiem::operator++ (){
    x = x + 1;
    y = y + 1;
}
CDiem CDiem::operator++ (int){
    CDiem temp = *this;
    ++*this;
    return temp;
}
CDiem& CDiem::operator-- (){
    x = x - 1;
    y = y - 1;
}
CDiem CDiem::operator-- (int){
    CDiem temp = *this;
    --*this;
    return temp;
}