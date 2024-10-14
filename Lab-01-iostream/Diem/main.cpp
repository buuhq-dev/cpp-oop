#include <iostream>
#include "includes/CDiem.h"

using namespace std;

 int main(){
   CDiem diem1; cin >> diem1;
   CDiem diem2(1,2);

    cout << "Khoang cach: " << diem1.KhoangCach(diem2) << endl;
    return 0;
 }