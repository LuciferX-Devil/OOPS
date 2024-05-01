/*Three are three types of employees in Indian railways. They are regular, daily wages and
consolidated employees. Gross Pay for the employees is calculated as follows using
function overloading:
 Regular employees: Gross salary = Basic + HRA+ DA
 Daily wages – Wages per hour * Number of hours
 Consolidated – fixed amount
Input: Components for calculating gross pay
Output: Gross pay [Module 7, Hard]*/

#include <iostream>

using namespace std;

void GrossSalary(int basic,int hra,int da){
    int gross = basic + hra + da;
    cout<<gross<<endl;
}

void GrossSalary(int wph,int hours){
    int gross = wph*hours;
    cout<<gross<<endl;
}

int main(){
    string emptype;int basic,hra,da,wph,hours,conspay;
    while(emptype!="Regular"&&emptype!="Daily"&&emptype!="Consolidated"){
    cout<<"What kinda employee are ya?: ";
    cin>>emptype;
}
    if(emptype=="Regular"){cout<<"Enter Basic, hra, da";cin>>basic>>hra>>da;if(basic<hra){cout<<"Invalid pay scale";}else{GrossSalary(basic,hra,da);}}
    else if(emptype=="Daily"){cout<<"Enter wph,hours";cin>>wph>>hours;GrossSalary(wph,hours);}
    else if(emptype=="Consolidated"){cout<<"Enter console pay";cin>>conspay;cout<<conspay;}
    return 0;
}
