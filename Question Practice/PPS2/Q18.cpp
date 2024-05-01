/*Suppose you are working on a project to create a simple banking system and you need
to create a class hierarchy for different types of bank accounts. You want to create a base
class called BankAccount that contains basic account information and methods that are
common to all types of bank accounts. You also want to create a derived class called
SavingsAccount that inherits from BankAccount and contains additional methods specific
to savings accounts. Create a C++ code snippet for the above scenario that demonstrates
inheritance. (MODULE 6 - MODERATE)*/

#include <iostream>

using namespace std;

class BankAccount{
    int acc_no,min_bal;
    string hold_name;
    public:
    int Bbalance,Binterest;
    BankAccount(){}
    BankAccount(int acc_no,string hold_name,int min_bal,int Bbalance,int Binterest):acc_no(acc_no),hold_name(hold_name),Bbalance(Bbalance),Binterest(Binterest){}
    void getPriv(){
        cout<<acc_no<<endl<<hold_name<<endl<<min_bal<<endl;
    }
};

class SavingsAccount : public BankAccount{
    public:
    int Sbalance,Sinterest;
    SavingsAccount(){}
    SavingsAccount(int acc_no,string hold_name,int min_bal,int Bbalance,int Binterest,int Sbalance, int Sinterest):BankAccount(acc_no,hold_name,min_bal,Bbalance,Binterest),Sbalance(Sbalance),Sinterest(Sinterest){}
    void display(){
        getPriv();
        cout<<"Bank Account"<<endl<<Bbalance<<endl<<Binterest<<"%"<<endl;
        cout<<"Savings Account"<<endl<<Sbalance<<endl<<Sinterest<<"%"<<endl;
    }
};

int main(){
    int acc_no,min_bal,Bbalance,Binterest,Sbalance,Sinterest;string hold_name;
    cin>>acc_no>>hold_name>>min_bal>>Bbalance>>Binterest>>Sbalance>>Sinterest;
    SavingsAccount saver(acc_no,hold_name,min_bal,Bbalance,Binterest,Sbalance,Sinterest);
    saver.display();

    return 0;
}
