#include <iostream>
#include "CSoPhuc.h"

CSoPhuc::CSoPhuc(){
    thuc = 0; ao = 0;
}
CSoPhuc::CSoPhuc(float t, float a){
    thuc = t; ao = a;
}
CSoPhuc::CSoPhuc(const CSoPhuc &so){
    thuc = so.thuc; ao = so.ao;
}
CSoPhuc::~CSoPhuc(){
    cout << "destruct...";
}
istream& operator >> (istream &is, CSoPhuc &so){
    cout << "Nhap phan thuc: "; is >> so.thuc;
    cout << "Nhap phan ao: "; is >> so.ao;
    return is;
}
ostream& operator << (ostream &os, CSoPhuc &so){
    os << "So phuc: " << so.thuc << " + " << so.ao << "i" << endl;
}
CSoPhuc CSoPhuc::Tong(CSoPhuc x){
    CSoPhuc temp;
    temp.thuc = thuc + x.thuc;
    temp.ao = ao + x.ao;
    return temp;
}
CSoPhuc CSoPhuc::Hieu(CSoPhuc x){
    CSoPhuc temp;
    temp.thuc = thuc - x.thuc;
    temp.ao = ao - x.ao;
    return temp;
}
CSoPhuc CSoPhuc::Tich(CSoPhuc x){
    CSoPhuc temp;
    temp.thuc=thuc*x.thuc-ao*x.ao;
    temp.ao=thuc*x.ao+ao*x.thuc;
    return temp;
}