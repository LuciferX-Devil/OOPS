#include <iostream>

using namespace std;

class Person{

    private:
    string name;
    int age;

    public:
    void getData();
    void display();
};

void Person :: getData(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"\nEnter age: ";
    cin>>age;
}

void Person :: display(){
    cout<<"Name of Person: "<<name<<endl;
    cout<<"Age of person: "<<age<<endl;
}

int main(){

    Person p;
    p.getData();
    p.display();

    return 0;
}
