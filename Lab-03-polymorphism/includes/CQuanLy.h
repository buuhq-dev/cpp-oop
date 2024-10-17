#include "CNhanVien.h"

#ifndef CQuanLy_H
#define CQuanLy_H
class CQuanLy:public CNhanVien
{
    protected:
        float hscv;
        float thuong;
    public:
        void Nhap(string ht, CNgay ng, float l, float lcoban, float hschucvu, float thg);
        void TinhLuong();
        //void Xuat();
        float LayLuong();
        CNhanVien* TimKiem(string);
};
#endif