#include <iostream>
#include "includes/CNgay.h"

using namespace std;

 int main(){

   CNgay ngay1; cin >> ngay1;
   CNgay ngay2(1,1,2024);
   cout << "la nam nhuan: " << ngay2.KTNhuan() << endl;
   ngay1++;
   cout << "Next day is: " << ngay1;
   return 0;
 }