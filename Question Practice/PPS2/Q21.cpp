/*Write a Program to perform the following scenario. Define a class student with rollno as
member and getdata() and putdata() as member functions. .Define another class test that
inherit the class student, this class test has data members as marks in the subject 1 and
subject 2 with member functions getmark() and putmark(). Define a class Grade with data
member grade and a member function to display the grade. Define another class result that
inherit the classes test and Grade with data member total and member function to compute
the total marks along with the grade.*/

#include <iostream>

using namespace std;

class Student{
    public:
    int rollno;
    void putData(int rollno){
        this->rollno=rollno;
    }
    void getData(){
        cout<<"Roll No:"<<rollno<<endl;
    }
};

class Test:public Student{
    public:
    int mark1,mark2;
    void putMark(int mark1,int mark2){
        this->mark1=mark1;
        this->mark2=mark2;
    }
    void getMark(){
        cout<<"Sub1: "<<mark1<<endl<<"Sub2: "<<mark2<<endl;
    }

};

class Grade{
    public:
    string grade;
    void displayGrade(){
        cout<<grade<<endl;
    }
};

class Total : public Test,public Grade{
    public:
    int total;
    void markOut(){
        if(mark1+mark2>=90){grade="A";}else if(mark1+mark2>=70 and mark1+mark2<90){grade="B";}else if(mark1+mark2<70){grade="L Bozo";}
        cout<<mark1+mark2<<endl;
    }
};

int main(){
    int rollno,mark1,mark2; 
    cin>>rollno>>mark1>>mark2;
    class Total t1;
    t1.putData(rollno);t1.getData();
    t1.putMark(mark1,mark2);t1.getMark();
    t1.markOut();t1.displayGrade();
    return 0;
}
