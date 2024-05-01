#include <iostream>

using namespace std;

class Hello{
    public:
    int a;
    Hello adder(Hello H1,Hello H2){
        Hello H3;
        H3.a=H2.a+H1.a;
        return H3;
    }
};

int main(){
    Hello H1,H2,H3;
    H1.a=10;
    H2.a=20;
    H3.a=0;
    cout<<H1.a<<" "<<H2.a<<" "<<H3.a<<endl;
    H3=H1.adder(H1,H2);
    cout<<H1.a<<" "<<H2.a<<" "<<H3.a<<endl;
    return 0;
}
