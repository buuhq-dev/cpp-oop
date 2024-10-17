#include <iostream>
#include "includes/CDiem.h"

using namespace std;

  int main(){
    CDiem diem1; cin >> diem1;
    CDiem diem2(1,2);

    CDiem kq = diem2 + diem1;
    kq += diem2;
    cout << kq;
    //cout << "Khoang cach: " << diem1.KhoangCach(diem2) << endl;
    //diem1++;
    diem1--;
    cout << diem1;
    return 0;
}