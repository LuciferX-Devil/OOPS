#include <iostream>
using namespace std;

class ShoppingList{
    public:
    string cart[3];
    
    void itemAdd(int i){
        cout<<"Choose what you want to add(only 3): "<<endl;
        cout<<"Carrot: 5, Bread: 10, Apple: 6, Steak: 14, Potato: 7, Nothing"<<endl;
        cin>>cart[i];
        while(cart[i]!="Carrot"&&cart[i]!="Bread"&&cart[i]!="Apple"&&cart[i]!="Steak"&&cart[i]!="Potato"&&cart[i]!="Nothing"){cout<<"Invalid item, try again.";cin>>cart[i];}
        if(cart[i]=="Nothing"){cout<<"Nothing added"<<endl;}
        else{cout<<cart[i]<<" has been added to cart!"<<endl;}        
        }


    void itemRemove(int i){
        cout<<"Enter new product: ";
        cout<<"Carrot: 5, Bread: 10, Apple: 6, Steak: 14, Potato: 7, Nothing"<<endl;
        cin>>cart[i];
        while(cart[i]!="Carrot"&&cart[i]!="Bread"&&cart[i]!="Apple"&&cart[i]!="Steak"&&cart[i]!="Potato"&&cart[i]!="Nothing"){cout<<"Invalid item, try again.";cin>>cart[i];}
        if(cart[i]=="Nothing"){cout<<"Item removed successfully"<<endl;}
        else{cout<<"Item editted to "<<cart[i]<<endl;}
    }

    void priceAdd(){
        int price=0;
        for(int i=0;i<3;i++){
            if(cart[i]=="Carrot"){price+=5;}
            else if(cart[i]=="Bread"){price+=10;}
            else if(cart[i]=="Apple"){price+=6;}
            else if(cart[i]=="Steak"){price+=14;}
            else if(cart[i]=="Potato"){price+=7;}
            else if(cart[i]=="Nothing"){price+=0;}
        }
        cout<<"Your cart total is "<<price<<endl;
        cout<<"Have a nice day! :)";
    }
};

int main(){
    ShoppingList S1; 

    int index;
    string question;
    cout<<"Enter Exit to get total price..."<<endl;
    cout<<"You may only add 3 items at a time!"<<endl;
    cout<<"You can edit/remove an index by entering the same index or using our exclusive remove feature!"<<endl;
    while(question!="Exit"){

        cout<<"What do you want to do? Add/Remove/Exit: ";
        cin>>question;
        if(question=="Add"){
            cout<<"Choose index: 0/1/2: ";
            cin>>index;
            while(index<0||index>2){cout<<"Invalid Input, please try again";cin>>index;}
            S1.itemAdd(index);

        }
        else if(question=="Remove"){
            cout<<"Choose index: 0/1/2: ";
            cin>>index;
            while(index<0||index>2){cout<<"Invalid Input, please try again";cin>>index;}
            S1.itemRemove(index);
        }
    }
    S1.priceAdd();
    return 0;
}
