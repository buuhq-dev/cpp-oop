#include <iostream>
#include "includes/CCongTy.h"
#include "includes/CQuanLy.h"

using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //int n, k, v;
    //cin >> n; cin >> k; cin >> v;
    CCongTy congty(3);

    CNhanVien* p1 = new CQuanLy();
    p1 -> Nhap();

    congty.Nhap(0, *p1);

    //cout << "Hello..." << v << endl;
}