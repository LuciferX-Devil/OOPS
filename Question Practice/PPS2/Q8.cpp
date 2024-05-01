//Create a class called "Rectangle" that has private attributes "length" and "width" and
//public methods "getArea" and "getPerimeter" that return the area and perimeter of the
//rectangle. Write a program that creates an object of the class and tests the methods.
//(MODULE 5 - MEDIUM)

#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length,breadth;
    public:
    int getArea(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
        return length*breadth;
    }
    int getPerimeter(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle rec1;
    int a,b;
    cin>>a;cin>>b;
    cout<<rec1.getArea(a,b)<<endl;
    cout<<rec1.getPerimeter(a,b)<<endl;
    return 0;
}
