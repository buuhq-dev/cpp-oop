#include "CNhanVien.h"
class CVanPhong:public CNhanVien
{
    protected:
        int snlv;
        float trocap;
    public:
        void Nhap();
        void TinhLuong();
        void Xuat();
        float LayLuong();
        CNhanVien* TimKiem (char []);
};