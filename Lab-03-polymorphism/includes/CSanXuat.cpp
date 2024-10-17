#include <string.h>
#include "CSanXuat.h"

void CSanXuat::Nhap(string ht, CNgay ng, float l, float lcoban, int x){
    CNhanVien::Nhap(ht, ng, l, lcb);
    ssp = x;
}

float CSanXuat::LayLuong(){
    return luong;
}

CNhanVien* CSanXuat::TimKiem(string ht){
    if(ht.compare(hoten) == 0)
        return this;
    return NULL;
}

void CSanXuat::TinhLuong(){
    luong = lcb+ssp*2000;
}