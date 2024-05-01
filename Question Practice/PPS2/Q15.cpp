//Create two classes DM and DB. DM stores the distance in meters and centimeters and
//DB Stores the distance in feet and inches. Write a program to read the values for the class
//objects and Add one object DM with another object DB. Note: use a friend function to carry
//out addition operation. The resultant object is stored in DM and display it.
//1 feet = 30 centimeters
//1 inch =2.54 centimeters
//1 meter = 100 centimeters (MODULE 6 - EASY) 


#include <iostream>

using namespace std;

class DB;

class DM{
    public:
    float metres,centimetres,total;
    friend void add(DM& dm1,DB& db1);
    void display(){
        cout<<"The total in metres is: "<<total;
    }
};

class DB{
    public:
    float feet,inches,total;
    friend void add(DM& dm1,DB& db1);
};

void add(DM& dm1, DB& db1){
    dm1.total=db1.feet*30+db1.inches*2.54+dm1.metres*100+dm1.centimetres;
    dm1.total/=100;
}

int main(){
    DM dm1;DB db1;
    float a,b,c,d;
    cout<<"Enter the value in meter and centimeter: "<<endl;cout<<"Enter meter value : ";cin>>dm1.metres;cout<<"Enter centimeter value: ";cin>>dm1.centimetres;cout<<"Enter the value in feet and inches: "<<endl;cout<<"Enter feet value : ";cin>>db1.feet;cout<<"Enter inches value : ";cin>>db1.inches;
    add(dm1,db1);
    dm1.display();
    return 0;
}
