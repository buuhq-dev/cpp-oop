#include <iostream>

using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &x);
void Xuat(PHANSO x);
void RutGon(PHANSO &x);

int main() {
    PHANSO ps;
    Nhap(ps);
    RutGon(ps);
    Xuat(ps);
    return 0;
}

void Nhap(PHANSO &x){
    cout << "Nhap tu: "; cin >> x.tu;
    cout << "Nhap mau: "; cin >> x.mau;
}
void Xuat(PHANSO x){
    cout << "phan so rut gon la: " << x.tu << "/" << x.mau << endl;
}
void RutGon(PHANSO &x){
    int a = abs(x.tu);
    int b = abs(x.mau);
    while(a*b != 0)
    {
    if(a > b)
        a = a - b;
    else
        b = b - a;
    }
    x.tu = x.tu / (a+b);
    x.mau = x.mau / (a+b);
}