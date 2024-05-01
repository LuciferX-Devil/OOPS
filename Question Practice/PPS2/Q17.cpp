/*Use hierarchical inheritance to implement a student database that will be composed of
classes Student, UnderGraduate, and PostGraduate.
 The base class ‘Student’ will have a data member Name, Id and Age. Getstu() and
Putstu() methods will ask the user to enter the details of the student and display the
same.
 In derived class, UnderGraduate will have the data member UGCourses to specify
the
number of courses offered. GetUGCourses() and PetUGCourses() methods will ask
the user to enter the number of courses and display the same.
 In derived class, PostGraduate will have the data member PGCourses to specify the
number of courses offered. GetPGCourses() and PetPGCourses() methods will ask the
user to enter the number of courses and display the same. (MODULE 6 - MODERATE) */


#include <iostream>
#include <vector>

using namespace std;

class Student{
    string name;
    int ID, age;
    public:
    
    void putStu(string name,int ID,int age){
        this->name=name;
        this->ID=ID;
        this->age=age;
    }

    void getStu(){
        cout<<name<<endl<<ID<<endl<<age<<endl;
    }
};

class UnderGraduate : public Student{
    public:
        vector<string> UGCourses;
        void putUGCourses(int i){
            for(int j=0;j<i;j++){
                string course;
                cin>>course;
                UGCourses.push_back(course);
            }
        }
        void getUGCourses(int i){
            for(int j=0;j<i;j++){
                cout<<UGCourses[j]<<endl;
            }
        }
        ~UnderGraduate(){}
};

class PostGraduate : public UnderGraduate{
        public:
        vector<string> PGCourses;
        void putPGCourses(int i){
            for(int j=0;j<i;j++){
                string course;
                cin>>course;
                PGCourses.push_back(course);
            }
        }
        void getPGCourses(int i){
            for(int j=0;j<i;j++){
                cout<<PGCourses[j]<<endl;
            }
        }
        ~PostGraduate(){}
};

int main(){
    PostGraduate deets;
    int i,j,ID,age;string name;
    cin>>name>>ID>>age>>i>>j;
    deets.putStu(name,ID,age);
    deets.putUGCourses(i);
    deets.putPGCourses(j);
    deets.getStu();deets.getUGCourses(i);deets.getPGCourses(j);
    return 0;
}

