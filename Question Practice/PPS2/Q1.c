// 1. A Valedictory function has been arranged to greet the Highest paid salary employee to
//encourage his efforts Write a C program to accept details of 'n' Employee (E. No, Emp
//Name, Salary) and display the details of employee having highest salary. Use array of
//structure. (Module -4, easy ) 


#include <stdio.h>

struct Employee{
    int emp_no;
    char emp_name[12];
    float emp_salary;
};

void richBoi(int a, char b[12], float c){
    printf("Highest salary employee details: \n");
    printf("%d\n",a);
    printf("%s\n",b);
    printf("%f\n",c);
}

int main(){
    int n;
    printf("How many employee details entered :");
    scanf("%d",&n);
    struct Employee employee[n];
    struct Employee temp;
    for(int i=0;i<n;i++){
        printf("Enter the details of Employee%d:\n",i+1);
        printf("Employee no.: ");
        scanf("%d",&employee[i].emp_no);
        printf("Employee name.: ");
        scanf("%s",&employee[i].emp_name);
        printf("Salary: ");
        scanf("%f",&employee[i].emp_salary);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(employee[i].emp_salary>employee[j].emp_salary){
                temp = employee[i];
                employee[i]=employee[j];
                employee[j]=temp;
            }
        }
    }
    richBoi(employee[2].emp_no,employee[2].emp_name,employee[2].emp_salary);
    return 0;
}
