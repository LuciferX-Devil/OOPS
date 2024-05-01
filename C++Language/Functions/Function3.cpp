//Multiple Functions Or FUNCTION OVERLOADING


#include <iostream>

using namespace std;

class Pizza{
    public:
    string crust;
    string topping;
    string size;
    float price;
    Pizza(string crust,float price);
    Pizza(string topping,string size);
    void display1(){
        cout<<"you chose "<<crust<<" and "<<price<<endl;
    }
    void display2(){
        cout<<"you chose "<<topping<<" "<<size<<endl;
    }
    };

Pizza :: Pizza(string crust,float price){
    this->crust=crust;
    this->price=price;
}

Pizza :: Pizza(string topping,string size){
    this->topping=topping;
    this->size=size;
}

int main(){

    Pizza pizza1("Hand Tossed",24.99);
    Pizza pizza2("Pineapple","Medium");
    pizza1.display1();
    pizza2.display2();

    return 0;
}
