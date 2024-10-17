#include "CNgay.h"

class CNhanVien{
    protected:
        char hoten[31];
        CNgay ngaysinh;
        float luong;
        float lcb;
    public:
        virtual void Nhap(char ht[31], CNgay ng, float l, float lcoban);
        virtual void TinhLuong();
        virtual void Xuat();
        virtual float LayLuong();
        virtual CNhanVien* TimKiem(char []);
};