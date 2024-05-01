#include <stdio.h>

struct Employee{
    char emp_name[12];
    int emp_salary;
    int emp_id;
};


int main(){
    int num;
    printf("Enter Number of employees: ");
    scanf("%d",&num);

        struct Employee Employees[num];

    for(int i=0;i<num;i++){

        printf("Enter name of employee %d: ",i+1);
        scanf("%s",&Employees[i].emp_name);

        printf("Enter ID for employee %d: ",i+1);
        scanf("%d",&Employees[i].emp_id);        
        
        printf("Enter salary of employee %d: ",i+1);
        scanf("%d",&Employees[i].emp_salary);

    }

    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){

            if(Employees[i].emp_salary>Employees[j].emp_salary){
                struct Employee temp;
                temp=Employees[i];
                Employees[i]=Employees[j];
                Employees[j]=temp;
            }
        } 
    }


printf("Name=%s",Employees[num-1].emp_name);
printf("ID=%d",Employees[num-1].emp_id);
printf("Salary=%d",Employees[num-1].emp_salary);

    return 0;
}
