//A car rental company wants to keep track of its fleet of cars. Each car has a make, model,
//year, and rental price. The company wants to be able to calculate the total rental price of all
//its cars and also find the car with the highest rental price. Design a program using OOPs
//and the "this" pointer to implement this scenario. Create a new car object and verify that
//all the attributes are set correctly using the "this" pointer. (MODULE 5 - MEDIUM)

#include <iostream>

using namespace std;

class Cars{
    public:
    string make;
    string model;
    int year;
    float rent_price;

    void carDeets(string make,string model,int year, float rent_price){
        this->make=make;
        this->model=model;
        this->year=year;
        this->rent_price=rent_price;
    }
};

int main(){
    string a,b;
    int c;float d;
    int limit;
    cin>>limit;
    Cars car[limit];
    Cars temp;
    for(int i=0;i<limit;i++){
        cout<<"Make: ";cin>>a;cout<<"Model: ";cin>>b;cout<<"Year: ";cin>>c;cout<<"Rent Price: ";cin>>d;
        car[i].carDeets(a,b,c,d);
    }
    for(int i=0;i<limit;i++){
        for(int j=i+1;j<limit;j++){
            if(car[i].rent_price>car[j].rent_price){
                temp=car[i];
                car[i]=car[j];
                car[j]=temp;
            }
        }
    }
    int total=0;
    for(int i=0;i<limit;i++){
        total+=car[i].rent_price;
    }
    cout<<"Total rental price is: "<<total<<endl;
    cout<<"The car which will make your pockets full: "<<"{"<<car[limit-1].make<<", "<<car[limit-1].model<<", "<<car[limit-1].year<<", "<<car[limit-1].rent_price<<"}"<<endl;
    int input1;
    string input2;
    cout<<"Enter index you wanna check 0-"<<limit-1<<": ";cin>>input1;while(input1<0&&input1>=limit){cout<<"Invalid Input. Try again";cin>>input1;}cout<<"What you wanna check?(Make,Model,Year,RentPrice)";cin>>input2;
    while(input2!="Make"&&input2!="Model"&&input2!="Year"&&input2!="RentPrice"){"Invalid Input. Try again: ";cin>>input2;}
    if(input2=="Make"){cout<<car[input1].make;}else if(input2=="Model"){cout<<car[input1].model;}else if(input2=="Year"){cout<<car[input1].year;}else if(input2=="RentPrice"){cout<<car[input1].rent_price;}

    return 0;
}
