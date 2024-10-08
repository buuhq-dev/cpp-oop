#include "CPhanSo.h"
#include <iostream>

using namespace std;

void CPhanSo::Nhap(){
    printf("Nhap tu: ");
    scanf("%d",&tu);
    printf("Nhap mau: ");
    scanf("%d",&mau);
};
void CPhanSo::Xuat(){
    printf("\n Tu: %d", tu);
    printf("\n Mau: %d", mau);
};
int CPhanSo::XetDau(){
    if(tu*mau > 0)
        return 1;
    if(tu*mau < 0)
        return -2;
    return 0;
};