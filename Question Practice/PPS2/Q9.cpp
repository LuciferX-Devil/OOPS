//Create a class called "Car" with attributes "make", "model", and "year". Create an
//object of the class and print out its attributes. (MODULE 5 - MEDIUM)

#include <iostream>

using namespace std;

class Car{
    private:
    string make;
    string model;
    int year;
    public:
    void deetEnter(string make,string model,int year){
        this->make=make;
        this->model=model;
        this->year=year;
    }
    void display(){
        cout<<"{Make: "<<make<<", Model: "<<model<<", Year: "<<year<<"}"<<endl;
    }
};

int main(){
    Car c1;
    string a,b;int c;
    cin>>a;cin>>b;cin>>c;
    c1.deetEnter(a,b,c);
    c1.display();
}
