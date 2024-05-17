#include <stdio.h>
#include<string.h>

struct Employee{
    char name[10];
    char address[10];
    int phone;
    char email[10];
    int voteno;
};

int main(){
    int spoiltvotes;
    struct Employee emp[5];
    char name[10];
    scanf("%s",emp[1].name);
    strcpy(emp[0].name,name);
    printf("%s",emp[0].name);

    return 0;
}
