#include <iostream>
#include <string.h>
#include "CNhanVien.h"

void CNhanVien::Nhap(string ht, CNgay ng, float l, float lcoban){
    hoten = ht; 
    ngaysinh = ng; luong = l; lcb = lcoban;
}

float CNhanVien::LayLuong(){
    return luong;
}

CNhanVien* CNhanVien::TimKiem(string ht){
    if(ht.compare(hoten) == 0)
        return this;
    return NULL;
}

void CNhanVien::TinhLuong(){
    return;
}

void CNhanVien::Xuat(){
    cout << "Nhan vien: " << hoten << " co luong la: " << luong << endl;
}