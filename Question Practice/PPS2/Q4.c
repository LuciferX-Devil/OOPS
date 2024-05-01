//Create a class called "Rectangle" that has attributes "length" and "width". Write a
//method that calculates the area of the rectangle. (MODULE 5 - EASY)

#include <iostream>

using namespace std;

class Area{
    private:
    int length;
    int breadth;
    int area;

    public:
    void areaCalc(int a,int b){length=a;breadth=b;area=length*breadth;}
    void display(){
        cout<<"Area: "<<area;
    }
};
int main(){
    Area a1;
    int a; int b;
    cin>>a;cin>>b;
    a1.areaCalc(a,b);
    a1.display();
    return 0;
}
