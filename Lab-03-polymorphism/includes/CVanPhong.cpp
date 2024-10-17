#include <iostream>
#include <string.h>
#include "CVanPhong.h"

void CVanPhong::Nhap(string ht, CNgay ng, float l, float lcoban, int songaylv, float trcap){
    CNhanVien::Nhap(ht, ng, l, lcoban);
    snlv = songaylv; trocap = trcap;
}

float CVanPhong::LayLuong(){
    return luong;
}

CNhanVien* CVanPhong::TimKiem(string ht){
    if(ht.compare(hoten) == 0)
        return this;
    return NULL;
}

void CVanPhong::TinhLuong(){
    luong=lcb + snlv*100000 + trocap;
}