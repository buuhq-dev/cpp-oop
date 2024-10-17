#include "CNhanVien.h"

class CCongTy
{
    protected:
        int n;
        CNhanVien *ds[100];
    public:
        CCongTy();
        CCongTy(int);
        void Nhap(int, CNhanVien);
        void TinhLuong();
        void Xuat();
        float TongLuong();
        CNhanVien* TimKiem(char []);
};