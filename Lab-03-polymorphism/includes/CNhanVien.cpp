#include <iostream>
#include <string.h>
#include "CNhanVien.h"

void CNhanVien::Nhap(char ht[31], CNgay ng, float l, float lcoban){
    hoten = ht; 
}

float CNhanVien::LayLuong(){
    return luong;
}

CNhanVien* CNhanVien::TimKiem(char ht[]){
    if(strcmp(hoten,ht)==0)
        return this;
    return NULL;
}

void CNhanVien::TinhLuong(){
    return;
}