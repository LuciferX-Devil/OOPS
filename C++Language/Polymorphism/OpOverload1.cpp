//Unary operator

#include <iostream>

using namespace std;

class MeOverload{
    private:
    int count=69;
    public:
    void operator -(){
        count-=10;
    }
    void display(){
        cout<<count<<endl;
    }
};

int main(){
    MeOverload overloaded;
    -overloaded;
    overloaded.display();
    overloaded.operator-();
    overloaded.display();
    return 0;
}
