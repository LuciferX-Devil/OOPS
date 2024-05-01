#include <iostream>
using namespace std;

class Franchise{

    public:
    void KFC(){

        cout<<"Finger Licking Good"<<endl;

    }

    void Burger_King(){

        cout<<"We have the best burgers"<<endl;

    }

};

int main(){

    Franchise fran;
    fran.KFC();
    fran.Burger_King();

    return 0;

}
