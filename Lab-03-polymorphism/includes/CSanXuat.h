#include "CNhanVien.h"
class CSanXuat:public CNhanVien
{
    protected:
        int ssp;
    public:
        void Nhap();
        void TinhLuong();
        void Xuat();
        float LayLuong();
        CNhanVien* TimKiem(char []);
};