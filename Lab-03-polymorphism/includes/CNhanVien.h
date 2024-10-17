#include "CNgay.h"


#ifndef CNhanVien_H
#define CNhanVien_H
class CNhanVien{
    protected:
        //char hoten[31];
        string hoten;
        CNgay ngaysinh;
        float luong;
        float lcb;
    public:
        virtual void Nhap(string, CNgay, float, float);
        virtual void TinhLuong();
        void Xuat();
        virtual float LayLuong();
        virtual CNhanVien* TimKiem(string);
};
#endif