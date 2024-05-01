//Write a code with Student as a base class, Mark as intermediate class and Result as a
//derived class.
// The base class named Student with data members id, and name and getstu() and
//putstu() are the methods to read and display the id and name.
// The intermediate class named Marks with data members m1, m2, m3 and
//getmarks()
//and putmarks() are the methods to read and display the marks.
// The derived class named Result with total, average as a data members and show() as
//the method to display the total and average of marks. (MODULE 6 - EASY)

#include <iostream>

using namespace std;

class Student{
    public:
    int id;
    string name;
    void putstu(int id,string name){
        this->id=id;
        this->name=name;
    }
    void getstu(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

class Mark : public Student{
    public:
    int m1,m2,m3;
    void putmarks(int m1,int m2,int m3){
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
    }
    void getmarks(){
        cout<<"Mark1: "<<m1<<endl;
        cout<<"Mark2: "<<m2<<endl;
        cout<<"Mark3: "<<m3<<endl;
    }
};

class Result : public Mark{
    public:
    int total;float average;
    void show(){
        total=(m1+m2+m3);average=(m1+m2+m3)/3;
        cout<<"The total is: "<<total<<endl;
        cout<<"The average is: "<<average;
    }
};

int main(){
    Result r1;
    int a;string b;int m1,m2,m3;
    cout<<"Enter ID: ";cin>>a;cout<<"Enter Name: ";cin>>b;cout<<"Enter mark m1: ";cin>>m1;cout<<"Enter mark m2: ";cin>>m2;cout<<"Enter mark m3: ";cin>>m3;
    r1.putstu(a,b);
    r1.putmarks(m1,m2,m3);
    r1.getstu();
    r1.getmarks();
    r1.show();
    return 0;
}
