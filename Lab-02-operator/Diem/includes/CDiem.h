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

        
        CDiem operator+ (CDiem);
        CDiem operator+= (CDiem);
        CDiem operator- (CDiem);
        CDiem operator-= (CDiem);

        CDiem& operator++ ();
        CDiem operator++ (int);
        CDiem& operator-- ();
        CDiem operator-- (int);

        float KhoangCachGoc();
        int operator>(CDiem);
        int operator<(CDiem);
        int operator>=(CDiem);
        int operator<=(CDiem);
        int operator==(CDiem);
        int operator!=(CDiem);

        float KhoangCach(CDiem P);

};