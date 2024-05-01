//Write a class named "Person" with a constructor that takes in a name and age as
//arguments. The constructor should initialize the object's name and age properties. Write a
//test case to verify that the constructor works correctly. (MODULE 5 - HARD) 

#include <iostream>

using namespace std;

class Person{
    private:
    string name;
    int age;
    public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age;
    }

    bool checkEr(string a,int b){
        if(a==name&&b==age){
            return 0;
        }
        else{return 1;}
    }
};

int main(){
    string a;int b;cin>>a;cin>>b;
    Person p1(a,b);
    p1.display();
    if(p1.checkEr(a,b)==0){cout<<"\nThe constructor works";}
    else{cout<<"Failure";}
    return 0;
}
