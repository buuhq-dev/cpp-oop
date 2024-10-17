#include <iostream>
#include "includes/CCongTy.h"
#include "includes/CQuanLy.h"
#include "includes/CSanXuat.h"
#include "includes/CVanPhong.h"

using namespace std;

CCongTy khoiTaoNhanVienCongTy();
int main(){
    //freopen("input.txt", "r", stdin);
    
    CCongTy congty = khoiTaoNhanVienCongTy();
    congty.TinhLuong();
    congty.Xuat();
    //float tongluong = congty.TongLuong();
    
    cout << "End Program..." << endl;
    return 0;
}

CCongTy khoiTaoNhanVienCongTy(){
    CNgay ngay;
    CCongTy congty(3);

    CQuanLy* p1 = new CQuanLy;
    p1->Nhap("Nguyen VAn A", ngay, 11000000, 2200000, 2, 5000000);
    // p1->TinhLuong();
    //p1->Xuat();
    congty.Nhap(0, p1);

    CSanXuat* p2 = new CSanXuat;
    p2->Nhap("Nguyen VAn B", ngay, 11000000, 2200000, 100);
    // p2->TinhLuong();
    // p2->Xuat();
    congty.Nhap(1, p2);

    CVanPhong* p3 = new CVanPhong;
    p3->Nhap("Nguyen VAn C", ngay, 11000000, 2200000, 24, 1000000);
    // p3->TinhLuong();
    // p3->Xuat();
    congty.Nhap(2, p3);
    return congty;
}