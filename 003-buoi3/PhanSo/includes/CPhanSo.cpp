#include "CPhanSo.h"
#include <iostream>

using namespace std;


CPhanSo::CPhanSo(){
    tu = 0;
    mau = 1;
}

CPhanSo::CPhanSo(int t, int m){
    tu = t;
    mau = m;
}

CPhanSo::CPhanSo(const CPhanSo &x){
    tu = x.tu;
    mau = x.mau;
}

CPhanSo::~CPhanSo(){
    cout << "destruct method \n";
}

istream& operator >> (istream &is, CPhanSo &x){
    cout << "Nhap tu: ";
    is >> x.tu;
    cout << "Nhap mau: ";
    is >> x.mau;
    return is;
}
ostream& operator << (ostream &os, CPhanSo &x){
    os << "Phan so la: " << x.tu << "/" << x.mau << endl;
    return os;
}


void CPhanSo::Nhap(){
    cout << "Nhap tu: "; cin >> tu;
    cout << "Nhap mau: "; cin >> mau;
};
void CPhanSo::Xuat(){
    cout << "Phan so la: " << tu << " / " << mau << endl;
};
void CPhanSo::RutGon(){
    int a = abs(tu);
    int b = abs(mau);

    while (a*b != 0){
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    tu = tu/(a + b);
    mau = mau/(a + b);
};

CPhanSo CPhanSo::operator+ (CPhanSo x){
    CPhanSo kq;
    kq.tu = tu*x.mau + mau*x.tu;
    kq.mau = mau*x.mau;
    return kq;
}
CPhanSo CPhanSo::operator- (CPhanSo x){
    CPhanSo kq;
    kq.tu = tu*x.mau - mau*x.tu;
    kq.mau = mau*x.mau;
    return kq;
}
CPhanSo CPhanSo::operator* (CPhanSo x){
    CPhanSo kq;
    kq.tu = tu*x.tu;
    kq.mau = mau*x.mau;
    return kq;
}
CPhanSo CPhanSo::operator/ (CPhanSo x){
    CPhanSo kq;
    kq.tu = tu*x.mau;
    kq.mau = mau*x.tu;
    return kq;
}

CPhanSo CPhanSo::operator*= (CPhanSo x){
    tu = tu*x.tu;
    mau = mau*x.mau;
    return *this;
}