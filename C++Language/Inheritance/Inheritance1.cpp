#include <iostream>

using namespace std;

class A{
    public:
    void printer(){
        cout<<"This is function for class A. ";
    }
};
class B{
    public:
    void printer(){
        cout<<"This is function for class B. ";
    }
};
class C : public A,public B{
    public:
    void printer(){cout<<"This is function for class C. ";}
};

int main(){
    A a;B b;C c;
    a.A::printer();
    b.B::printer();
    c.C::printer();
    return 0;
}
