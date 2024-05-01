//Write a program that takes in a number and outputs whether it is even or odd. Using
//class. 

#include <iostream>

using namespace std;

class EoO{
    private:
    int num;
    public:
    EoO(int a){
        num=a;
        if(num%2==0){cout<<"Even";}
        else{cout<<"Odd";}
    }

};

int main(){
    int a;cin>>a;while(a<0){printf("Invalid. Enter again. ");cin>>a;}
    EoO num1(a);

    return 0;
}
