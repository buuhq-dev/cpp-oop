#include "CHocSinh.h"

void CHocSinh::Nhap(){
    printf("Nhap ho ten:"); gets(hoten);
    printf("Nhap toan:"); scanf("%d", &toan);
    printf("Nhap van:"); scanf("%d", &van);
}
void CHocSinh::XuLy(){
    dtb=(float)(toan+van)/2;
}

void CHocSinh::Xuat(){
    printf("\nHo ten:%s", hoten);
    printf("\nToan: %d",toan);
    printf("\nVan: %d",van);
    printf("\nDTB: %f",dtb);
}