#include <string.h>
#include "CQuanLy.h"

void CQuanLy::Nhap(char ht[31]){
    //CNhanVien::Nhap(ht);
    hoten = ht;
}

float CQuanLy::LayLuong(){
    return luong;
}

CNhanVien* CQuanLy::TimKiem(char ht[]){
    if(strcmp(hoten,ht)==0)
        return this;
    return NULL;
}

void CQuanLy::TinhLuong(){
    luong=lcb*hscv + thuong;
}