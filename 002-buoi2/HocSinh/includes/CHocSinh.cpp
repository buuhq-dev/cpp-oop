#include "CHocSinh.h"
#include <iostream>
using namespace std;

void CHocSinh::Nhap(){
    cout << "Nhap ho ten: "; cin >> hoten;
    cout << "Nhap toan: "; cin >> toan;
    cout << "Nhap van: "; cin >> van;
}
void CHocSinh::XuLy(){
    dtb = (float) (toan+van)/2;
}

void CHocSinh::Xuat(){
    cout << "\nHo ten: " << hoten;
    cout << "\nToan: " << toan;
    cout << "\nVan: " << van;
    cout << "\nDTB: " << dtb;
}