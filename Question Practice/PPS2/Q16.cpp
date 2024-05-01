//16. Write a C++ program to read and print employee salary details using multilevel
//inheritance.
//a. Create a class named employee to get and print the employee details like employee
//number, name and designation.
//b. Create a derived class named salary which derives the class employee in private mode, to
//get the employee complete information including employee number, name, designation,
//basic pay, hra, da, pf and to display the complete employee information including the net
//pay.
//c. Create a derived class bank_details which derives the class salary in private mode to get
//the complete employee details including his bank name, account number and to display the
//complete employee details like empno, name, designation, bp, hra, da, pf, net pay, account
//number.
//d. Create appropriate main method for the same. (MODULE 6 - MODERATE) 

#include <iostream>

using namespace std;

class Employee{
    private:
    int empno;string name,desig;
    public:
    Employee(){}
    Employee(int empno,string name,string desig) : empno(empno),name(name),desig(desig){}
    int getEmpno(){return empno;}string getName(){return name;}string getDesig(){return desig;}
};

class Salary:private Employee{
    private:
    int hra,da,pf,net_pay;
    public:
    Salary(){}
    Salary(int empno,string name,string desig,int hra,int da,int pf,int net_pay):Employee(empno,name,desig),hra(hra),da(da),pf(pf),net_pay(net_pay){}
    int bypassgetEmpno(){return getEmpno();}string bypassgetName(){return getName();}string bypassgetDesig(){return getDesig();}
    int getHra(){return hra;}int getDa(){return da;}int getPf(){return pf;}int getNet_pay(){return net_pay;}
};

class Bank_Details:private Salary{
    private:
    string bankname;int accno;
    public:
    Bank_Details(){}
    Bank_Details(int empno,string name,string desig,int hra,int da,int pf,int net_pay,string bankname,int accno):Salary(empno,name,desig,hra,da,pf,net_pay),bankname(bankname),accno(accno){}
    void display(){cout<<bypassgetEmpno()<<endl<<bypassgetName()<<endl<<bypassgetDesig()<<endl<<getHra()<<endl<<getDa()<<endl<<getPf()<<endl<<getNet_pay()<<endl<<bankname<<endl<<accno<<endl;}
};

int main(){
    int empno,hra,da,pf,net_pay,accno;string name,desig,bankname;
    cin>>empno>>name>>desig>>hra>>da>>pf>>net_pay>>bankname>>accno;
    Bank_Details b1(empno,name,desig,hra,da,pf,net_pay,bankname,accno);
    b1.display();

    return 0;
}
