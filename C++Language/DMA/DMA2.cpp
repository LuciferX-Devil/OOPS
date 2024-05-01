#include <iostream>

using namespace std;

class Student{
    private:
    int ID;
    string name;
    public:
    Student(int ID,string name){this->ID=ID;this->name=name;}
    void display(){cout<<name<<endl<<ID<<endl;}
};

int main(){
    Student *s1 = new Student(20,"Hola");
    s1->display();
    (*s1).display();
    delete s1;
    return 0;
}
