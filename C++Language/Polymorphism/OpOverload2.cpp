//Binary operator overloading

#include <iostream>

using namespace std;

class MeOverloaded{
    int a;
    int b;
    public:
    void setDeets(int a,int b){this->a=a;this->b=b;}
    MeOverloaded operator +(MeOverloaded& o2){
        MeOverloaded o3;
        o3.a=a+o2.a;   // read below. a is the o1.a where o1 is the hidden arg. :)
        o3.b=b+o2.b;
        return o3;
    }
    void display(MeOverloaded& o3){
        cout<<o3.a<<endl<<o3.b<<endl;
    }
};

int main(){
    MeOverloaded o1,o2,o3,o4;
    o1.setDeets(4,5);
    o2.setDeets(1,2);
    o3=o1+o2;
    o3.display(o3);
    o4=o1.operator+(o2); //o1 is the calling or hidden object and o2 is the object being passed
    o4.display(o4);
}
