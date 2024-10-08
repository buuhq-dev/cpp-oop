#include <iostream>
#include "PhanSo/CPhanSo.h"
using namespace std;

int main(){
    CPhanSo a;
    a.Nhap();
    int kq = a.XetDau();

    cout << "hello cpp !!! " << kq << endl;
    return 0;
}