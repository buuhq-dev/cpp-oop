#include <iostream>

using namespace std;

struct HocSinh {
    char hoten[31];
    int toan;
    int van;
    float dtb;
};
typedef struct HocSinh HOCSINH;
void Nhap(HOCSINH &x);
void Xuat(HOCSINH x);
void XuLy(HOCSINH &x);

int main()
{
    HOCSINH hs;
    Nhap(hs);
    XuLy(hs);
    Xuat(hs);
    return 0;
} 

void Nhap(HOCSINH &x){
    cout << "Nhap ho ten: " << endl;
    cin >> x.hoten;
    cout << "Nhap toan: " << endl; cin >> x.toan;
    cout << "Nhap van: " << endl; cin >> x.van;
}
void Xuat(HOCSINH x){
    cout << "\nHo ten:" << x.hoten;
    cout << "\nToan:" << x.toan;
    cout << "\nVan:" << x.van;
    cout << "\nDTB:" << x.dtb << endl;
}
void XuLy(HOCSINH &x){
    x.dtb = (float) (x.toan + x.van) / 2;
}