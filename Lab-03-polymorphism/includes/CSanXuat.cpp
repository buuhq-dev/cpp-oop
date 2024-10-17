#include <string.h>
#include "CSanXuat.h"

float CSanXuat::LayLuong(){
    return luong;
}

CNhanVien* CSanXuat::TimKiem(char ht[]){
    if(strcmp(hoten,ht)==0)
        return this;
    return NULL;
}

void CSanXuat::TinhLuong(){
    luong = lcb+ssp*2000;
}