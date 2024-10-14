#include <iostream>

using namespace std;

class CPhanSo {
    private:
        int tu;
        int mau;
    public:
        CPhanSo();
        CPhanSo(int t, int m);
        CPhanSo(const CPhanSo &x);
        ~CPhanSo();
        friend istream& operator >> (istream &is, CPhanSo &x);
        friend ostream& operator << (ostream &os, CPhanSo &x);
        void Nhap();
        void Xuat();
        void RutGon();
};