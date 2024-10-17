#include <iostream>

using namespace std;

class A {
    public:
        virtual void Sketchy(){
            cout << "\n A's Sketchy";
            Sketchy(-1);
        }
        virtual void Sketchy(int num){
            cout << "\n A's Sketchy(int) " << num;
        }
};

class B: public A {
    public:
        void Sketchy(){
            cout << "\n B's Sketchy";
            Sketchy(-1);
        }
        void Sketchy(int num){
            cout << "\n B's Sketchy(int) " << num;
        }
};

class C: public B {
    public:
        // void Sketchy(){
        //     cout << "\n B's Sketchy";
        //     Sketchy(-1);
        // }
        void Sketchy(int num){
            cout << "\n C's Sketchy(int) " << num;
        }
};
void Curious(A* wacky){
    wacky ->Sketchy();
    ((C*)wacky)->Sketchy(123);
};

int main(){
    A* inky = new B;
    inky ->Sketchy();
    inky ->Sketchy(23);
    Curious(inky);

    B* pinky = new C;
    pinky ->Sketchy();
    pinky ->Sketchy(46);
    Curious(pinky);
    return 0;
}