#include <iostream>

using namespace std;

class Employee{
    public:
    int empid;
    string name;
    int salary;

    Employee(){}

    Employee(int empid,string name,int salary):empid(empid),name(name),salary(salary){}

    void display(){
        cout<<empid<<endl<<name<<endl<<salary<<endl;
        return;
    }
};

int main(){
    int count = -1;
    Employee *emp[5];

    int input;
    while(input!=4){
        cout<<"Enter what you wanna do.\n1->Add an employee\n2->Display oldest employee\n3->Delete an employee.\n4->Delightful message and exit.\n";
        cin>>input;
        if(input>4 || input<0){cout<<"Invalid input: ";cin>>input;}
        else if(input==1){
            count+=1;
            int empid,salary;string name;
            cin>>empid;
            if(!cin){cout<<"Invalid input. Program exitting because you are a dumbass."<<endl;break;}
            else{
                cin>>name;
                if(!cin){cout<<"Invalid input. Program exitting because you are a dumbass."<<endl;break;}
                else{
                    cin>>salary;
                    if(!cin){cout<<"Invalid input. Program exitting because you are a dumbass."<<endl;break;}
                    else{emp[count] = new Employee(empid,name,salary);}
                }
            }            
        }
        else if(input==2){
            if(count==-1){cout<<"Your company has no employees."<<endl;}
            else{
                for(int i = 0;i<count;i++){
                    for(int j=i+1;j<count;j++){
                        if(emp[j]->empid<emp[i]->empid){
                            Employee *temp;
                            temp=emp[j];
                            emp[j]=emp[i];
                            emp[i]=temp;
                        }
                    }
                }
            cout<<"Oldest employee: "<<endl;emp[0]->display();
            }
        }
        else if(input==3){
            int delinput;
            for(int i=0;i<=count;i++){
                cout<<"("<<i<<") "; emp[i]->display();
            }
            cout<<"Enter which employee you want to delete(0-"<<count<<"): ";
            cin>>delinput;
            if(delinput>count || count==-1){cout<<"Employee records don't exist"<<endl;}
            else if(count==0){
                emp[0] = NULL;
            }
            else{
                for(int i=delinput;i<count;i++){
                    for(int j=i+1;j<count;j++){
                        emp[i]=emp[j];
                    }
                }
                count-=1;
                cout<<"Employee deleted! Current number of employees: "<<count+1<<endl;
            }
        }
        else if(input==4){cout<<"Thank you for wasting your time! :)\n";for(int i=0;i<count;i++){delete emp[i];}}
    }

    return 0;
}
