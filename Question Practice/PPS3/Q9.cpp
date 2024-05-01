/*Write a C++ program showing runtime behaviour of virtual functions with following
conditions
i. Virtual functions cannot be static.
ii. A virtual function can be a friend function of another class.
iii. Virtual functions should be accessed using pointer or reference of base class type to
achieve runtime polymorphism.
iv. The prototype of virtual functions should be the same in the base as well as derived
class.
v. They are always defined in the base class and overridden in a derived class. It is not
mandatory for the derived class to override (or re-define the virtual function), in that
case, the base class version of the function is used.
vi. A class may have virtual destructor but it cannot have a virtual constructor*/

#include <iostream>

using namespace std;

class Hola{
    public:
    static int empno;
    void setEmpno(int x){
        empno=x;
    }
    virtual void setDeets(string name,int salary);
    virtual ~Hola(){}
};

void Hola::setDeets(string name,int salary){}

int Hola :: empno;

class Amigo : public Hola{
    public:
    string name;int salary;
    friend void setDeets(Amigo& amigo,string name,int salary);
    void getDeets(){
        cout<<empno<<endl<<name<<endl<<salary<<endl;
    }
};

void setDeets(Amigo& amigo,string a,int b){
        amigo.name=a;amigo.salary=b;
    }


int main(){
    int a;
    cin>>a;
    string name;int salary;
    cin>>name>>salary;
    if(salary<40000){cout<<"Invalid Employee. Minimum Salary is 40000";}
    else{
    Hola *amigo = new Amigo();
    amigo->setEmpno(a);
    Amigo wassup;
    setDeets(wassup,name,salary);
    wassup.getDeets();
    delete amigo;
    }
    return 0;
}
