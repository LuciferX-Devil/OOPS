#include <iostream>

using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
};

int main(){
    Car car1;
    car1.brand="Audi";
    car1.model="R8";
    car1.year=2004;

    Car car2;
    car2.brand="BMW";
    car2.model="X5";
    car2.year=2020;

    cout<<"Car 1:"<<" Brand "<<car1.brand<<" Model "<<car1.model<<" Year "<<car1.year<<endl;
    cout<<"Car 2:"<<" Brand "<<car2.brand<<" Model "<<car2.model<<" Year "<<car2.year;

    return 0;
}
