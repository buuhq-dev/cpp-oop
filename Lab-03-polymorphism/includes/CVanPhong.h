#include "CNhanVien.h"

#ifndef CVanPhong_H
#define CVanPhong_H
class CVanPhong:public CNhanVien
{
    protected:
        int snlv;
        float trocap;
    public:
        virtual void Nhap(string ht, CNgay ng, float l, float lcoban, int songaylv, float trcap);
        void TinhLuong();
        //void Xuat();
        float LayLuong();
        CNhanVien* TimKiem (string);
};
#endif