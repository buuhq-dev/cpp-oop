#include "CNhanVien.h"
class CQuanLy:public CNhanVien
{
    protected:
        float hscv;
        float thuong;
    public:
        virtual void Nhap(char ht[31]);
        void TinhLuong();
        void Xuat();
        float LayLuong();
        CNhanVien* TimKiem(char []);
};