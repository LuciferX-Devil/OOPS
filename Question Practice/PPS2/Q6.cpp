//Write a program that takes in two numbers and outputs the sum of their squares. Using
//C++ (MODULE 5 - EASY)

#include <iostream>

using namespace std;

class sumSquare{
    public:
    int num1,num2;
    void SumSquare(int num1,int num2){
        this->num1=num1;
        this->num2=num2;
        cout<<((num1*num1)+(num2*num2));
    }
};
int main(){
    sumSquare s1;
    int a,b;
    cin>>a;cin>>b;
    s1.SumSquare(a,b);
    return 0;
}
