#include <iostream>

using namespace std;

class Area{
    private:
    int length;
    int breadth;
    int area;

    public:
    void areaCalc(int l,int b);
    void display();
};

void Area :: areaCalc(int l,int b){
    length=l;
    breadth=b;
    area= length * breadth;
}

void Area :: display(){
    cout<<"The area of rectangle is: "<<area;
}

int main(){
    Area A1; 

    A1.areaCalc(10,20);
    A1.display();

    return 0;
}
