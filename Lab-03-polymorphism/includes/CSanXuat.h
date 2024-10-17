#include "CNhanVien.h"

#ifndef CSanXuat_H
#define CSanXuat_H
class CSanXuat:public CNhanVien
{
    protected:
        int ssp;
    public:
        void Nhap(string ht, CNgay ng, float l, float lcoban, int sosp);
        void TinhLuong();
        //void Xuat();
        float LayLuong();
        CNhanVien* TimKiem(string);
};
#endif