#include <iostream>

using namespace std;

void Nhap(char hoten[], int &toan, int &van);
void XuLy(int toan, int van, float &dtb);
void Xuat(char hoten[], int toan, int van, float dtb);

int main(){

    char ht[31];
    int t,v;
    float tb;

    Nhap(ht,t,v);
    XuLy(t,v,tb);
    Xuat(ht,t,v,tb);
    
    return 0;
 }

 void Nhap(char hoten[], int &toan, int &van){
    cout << "Nhap ho ten: " << endl;
    cin >> hoten;
    cout << "Nhap toan: " << endl; cin >> toan;
    cout << "Nhap van: " << endl; cin >> van;
 }

 void XuLy(int toan, int van, float &dtb){
    dtb = (float) (toan + van) / 2;
 }

 void Xuat(char hoten[], int toan, int van, float dtb){
    cout << "\nHo ten:" << hoten;
    cout << "\nToan:" << toan;
    cout << "\nVan:" << van;
    cout << "\nDTB:" << dtb << endl;
 }