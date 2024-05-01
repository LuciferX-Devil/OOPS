#include <stdio.h>

int salaryHike(int *x, int bonus){
    return (*x+bonus);
}

int main(){
    int salary,bonus,new_sal;
    printf("Enter salary: ");
    scanf("%d",&salary);
    printf("Enter bonus: ");
    scanf("%d",&bonus);
    new_sal=salaryHike(&salary,bonus);
    printf("New salary: %d",new_sal);
    return 0;
}
