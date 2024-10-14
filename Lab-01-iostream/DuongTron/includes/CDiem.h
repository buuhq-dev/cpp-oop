#include <iostream>
using namespace std;

class CDiem {
    private:
        float x;
        float y;
    public:
        CDiem();
        CDiem(float x1, float y1);
        CDiem(const CDiem &d);
        ~CDiem();
        friend istream& operator >> (istream &is, CDiem &d);
        friend ostream& operator << (ostream &os, CDiem &d);
        float KhoangCach(CDiem P);
        float GetX();
        float GetY();

};