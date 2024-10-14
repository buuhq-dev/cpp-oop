#include <iostream>
using namespace std;

class CSoPhuc {
    private:
        float thuc;
        float ao;
    public:
        CSoPhuc();
        CSoPhuc(float t, float a);
        CSoPhuc(const CSoPhuc &so);
        ~CSoPhuc();
        friend istream& operator >> (istream &is, CSoPhuc &so);
        friend ostream& operator << (ostream &os, CSoPhuc &so);
        CSoPhuc Tong(CSoPhuc x);
        CSoPhuc Hieu(CSoPhuc x);
        CSoPhuc Tich(CSoPhuc x);

};
