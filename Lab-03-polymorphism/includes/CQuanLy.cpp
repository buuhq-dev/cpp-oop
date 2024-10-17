#include <string.h>
#include "CQuanLy.h"

void CQuanLy::Nhap(string ht, CNgay ng, float l, float lcoban, float cv, float thg){
    CNhanVien::Nhap(ht, ng, l, lcoban);
    hscv = cv; thuong = thg;
}

float CQuanLy::LayLuong(){
    return luong;
}

CNhanVien* CQuanLy::TimKiem(string ht){
    if(ht.compare(hoten) == 0)
        return this;
    return NULL;
}

void CQuanLy::TinhLuong(){
    luong=lcb*hscv + thuong;
}

