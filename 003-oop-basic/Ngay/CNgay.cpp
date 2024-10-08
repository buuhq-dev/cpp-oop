#include <iostream>
#include "CNgay.h"

void CNgay::Nhap(){
    printf("Nhap ngay: ");
    scanf("%d",&ng);
    printf("Nhap thang: ");
    scanf("%d",&th);
    printf("Nhap nam: ");
    scanf("%d",&nm);
}
void CNgay::Xuat(){
    printf("\nNgay:%d",ng);
    printf("\nThang:%d",th);
    printf("\nNam:%d",nm);
}
CNgay CNgay::KeTiep(){
    long stt=SoThuTu();
    stt=stt+1;
    CNgay temp;
    temp.KhoiTao(stt);
    return temp;
}
int CNgay::KiemTraNhuan(){
    if(nm%4==0 && nm%100!=0)
        return 1;
    if(nm%400==0)
        return 1;
    return 0;
}
int CNgay::STTTrongNam(){
    int ngaythang[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(KiemTraNhuan()==1)
        ngaythang[1]=29;
    int stt = 0;
    for(int i=1;i<=th-1;i++)
        stt=stt + ngaythang[i-1];
    return (stt + ng);
}
long CNgay::SoThuTu(){

}
void CNgay::KhoiTao(int,int){

}
void CNgay::KhoiTao(long){

}
CNgay::CNgay(int ngay, int thang, int nam){
    ng = ngay;
    th = thang;
    nm = nam;
}
