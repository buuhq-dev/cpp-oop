#include <iostream>
#include "includes/Common.h"

using namespace std;

int main(){
    string str1, str2;
    char str[100];

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter another string: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);

    str2 = str1 + "----";
    display(str2);
    return 0;
}


