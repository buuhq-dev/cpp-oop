#include <iostream>
#include <string.h>
#include "CVanPhong.h"

float CVanPhong::LayLuong(){
    return luong;
}

CNhanVien* CVanPhong::TimKiem(char ht[]){
    if(strcmp(hoten,ht)==0)
        return this;
    return NULL;
}

void CVanPhong::TinhLuong(){
    luong=lcb + snlv*100000 + trocap;
}