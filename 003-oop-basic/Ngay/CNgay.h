#include <iostream>

class CNgay{
    private:
        int ng;
        int th;
        int nm;
    public:
        CNgay();
        void Nhap();
        void Xuat();
        CNgay KeTiep();
        int KiemTraNhuan();
        int STTTrongNam();
        long SoThuTu();
        void KhoiTao(int,int);
        void KhoiTao(long);
        CNgay(int ngay, int thang, int nam);
};