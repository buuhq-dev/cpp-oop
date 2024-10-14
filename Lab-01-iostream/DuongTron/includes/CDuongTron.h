#include <iostream>
#include "CDiem.h"

using namespace std;

class CDuongTron {
    private:
        CDiem I;
        float R;
    public:
        CDuongTron();
        CDuongTron(CDiem tam, float bankinh);
        CDuongTron(const CDuongTron &c);
        ~CDuongTron();
        friend istream& operator >> (istream &is, CDuongTron &c);
        friend ostream& operator << (ostream &os, CDuongTron &c);
        float ChuVi();
        float DienTich();
};