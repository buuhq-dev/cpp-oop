#include <iostream>
#include <math.h>
#include "CDuongTron.h"

using namespace std;

CDuongTron::CDuongTron(){
    CDiem tam(0,0);
    I = tam; R = 1;
}
CDuongTron::CDuongTron(CDiem tam, float bankinh){
    I = tam; R = bankinh;
}
CDuongTron::CDuongTron(const CDuongTron &c){
    I = c.I; R = c.R;
}
CDuongTron::~CDuongTron(){
    cout << "constructor..";
}
istream& operator >> (istream &is, CDuongTron &c){
    cout << "Tam: "; is >> c.I;
    cout << "Ban Kinh: "; is >> c.R;
    return is;
}
ostream& operator << (ostream &os, CDuongTron &c){
    os << "Duong tron co tam la: " << "O(" << c.I.GetX() << "," << c.I.GetY() << ")";
    os << "; ban kinh R = " << c.R << endl;
    return os;
}
float CDuongTron::ChuVi(){
    return 2*M_PI*R;
}
float CDuongTron::DienTich(){
    return M_PI*R*R;
}