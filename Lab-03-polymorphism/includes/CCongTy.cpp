#include "CCongTy.h"

CCongTy::CCongTy(){
    n = 1;
}
CCongTy::CCongTy(int k){
    n = k;
}

CNhanVien* CCongTy::TimKiem(string ht){
    for(int i=0;i<n;i++)
    {
        CNhanVien *kq;
        kq=ds[i]->TimKiem(ht);
        if(kq!=NULL)
            return kq;
    }
    return NULL;
}

float CCongTy::TongLuong()
{
    float s =0;
    for(int i=0;i<n;i++)
        s=s + ds[i]->LayLuong();
    return s;
}

void CCongTy::TinhLuong(){
    for(int i=0;i<n;i++)
        ds[i]->TinhLuong();
}

void CCongTy::Nhap(int i, CNhanVien *nv){
   ds[i] = nv;
}

void CCongTy::Xuat(){
    cout << "Tổng lương của " << n << " nhân viên trong công ty là: " << TongLuong() << endl;
}