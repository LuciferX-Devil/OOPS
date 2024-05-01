// Create a parent class named ‘Courier’ with the following:
//1. Data members CourierID, Name_of_Courier.
//2. Method named PrintBill() to accept the Base_fare of type double as parameter and
//display the CourierID, Name_of_Courier , and Shipping_Cost, where
//Shipping_Cost = Base_fare + 30.
//Create a subclass names ‘Internatial_services’ which inherits from the Courier class.
//The class include the following:
//1. Data members Destination, Weight.
//2. Method named FinalBill()to print the CourierID, Name_of_Courier, Destination,
//Weight and Total_ ShippingCost, where Total_ShippingCost = Base_fare * Weight.
//Print the message “More Sale” when Total_ShippingCost is more than 100,
//otherwise print the message “Less Sale”. (MODULE 6 - EASY)

#include <iostream>

using namespace std;

class Courier{
    public:
    int CourierID;
    string Name_of_Courier;
    void PrintBill(double Base_fare){
        cout<<"CourierID: "<<CourierID<<endl;
        cout<<"Name_of_Courier: "<<Name_of_Courier<<endl;
        double Shipping_Cost=Base_fare+30;
        cout<<"The shipping cost is: "<<Shipping_Cost<<endl;
    }
};

class International_services : public Courier{
    public:
    string Destination;
    double Weight;
    void FinalBill(double Base_fare){
        PrintBill(Base_fare);
        int Total_ShippingCost=Base_fare*Weight;
        cout<<"Total shipping cost: "<<Total_ShippingCost<<endl;
        if(Total_ShippingCost>100){cout<<"More Sale";}else{cout<<"Less Sale";}
    }
};

int main(){
    International_services i1;
    float Base_fare;
    cout<<"Enter the Courier ID: ";cin>>i1.CourierID;cout<<"Enter the Name of the Courier: ";cin>>i1.Name_of_Courier;cout<<"Enter the Base Fare: ";cin>>Base_fare;cout<<"Enter the Weight in KG:";cin>>i1.Weight;
    i1.FinalBill(Base_fare);
    return 0;
}
