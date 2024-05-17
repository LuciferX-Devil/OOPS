/* Payroll management system

1. Dynamic memory allocation
using C++
2. Classes and Objects
3. Constructors and Destructors
4. Static Member Functions
5. Functions with Objects as
Arguments
6. Friend Classes
7. Multiple Inheritance
8. Multi-level Inheritance
9. Operator Overloading
10. Abstract Classes*/

#include <iostream>

using namespace std;

class Bonus;

class Payroll{
    public:
    static int Salary;
    Payroll(){Salary=50000;}                   //Constructor
    static void getSalary(){                //Static Member Function
        cout<<Salary<<endl;
    }
    friend void getBonus(Bonus& b1);          //Function w/ object as arg

    friend class Bonus;                       //Friend class

    ~Payroll(){}                              //Destructor
};

int Payroll :: Salary;


class Bonus : public Payroll{
    public:
    int bonus=7500;
};

void getBonus(Bonus& b1){
    cout<<"Bonus: "<<b1.bonus<<endl;
}

class CTC{
    public:
    int costtocompany=10000;
};


class Extras : public Bonus,public CTC{        //Multiple Inheritance 
    public:
    int hra=5000;int da=1000;
    void virtual PureVirtualFunction() = 0;         //Abstract Class
};  

class TotalSalary : public Extras{          //Multi-Level Inheritance
    public:
    int total_salary;
    void PureVirtualFunction(){
        cout<<"Employee Salary: ";
    }
    void operator +(){                      // Operator Overloading
        total_salary = Salary + bonus + hra + da - costtocompany;
        cout<<total_salary<<endl;
    }
};       


int main(){
    TotalSalary *s1 = new TotalSalary();    //Dynamic Memory Alloc      //Class and Object
    s1->getSalary();
    Bonus b1;
    getBonus(b1);
    s1->PureVirtualFunction();
    s1->operator +();
    delete s1;
}
