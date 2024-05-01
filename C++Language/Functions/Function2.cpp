#include <iostream>

using namespace std;

class Student{
    private:
    string name;
    int marks;

    public:
    Student(string a,int b);
    void display(){
        cout<<name<<" "<<marks;
    }
};

Student :: Student(string a,int b){
    name=a;
    marks=b;
    cout<<"The constructor function has been invoked"<<endl;
}

int main(){

    Student S1("Alex",50);
    S1.display();

    return 0;
}
