#include <iostream>
#include "includes/CSoPhuc.h"

using namespace std;

 int main(){

   CSoPhuc p1; cin >> p1;
   CSoPhuc p2 (3, 4);
   
   CSoPhuc p3 = p1.Tong(p2);
   
   cout << "p1 + ps = ";
   cout << p3 << endl;
   return 0;
 }