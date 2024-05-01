#include <stdio.h>

struct Person{
    char name[12];
    int age;
};

    struct Student{
        struct Person Person1;
        int ID;
    }Student1;


int main(){


    printf("Enter name: ");
    scanf("%s",Student1.Person1.name);
    printf("Enter age: ");
    scanf("%d",&Student1.Person1.age);
    printf("If already a student, Enter ID: ");
    scanf("%d",&Student1.ID);

    printf("name: %s\n",Student1.Person1.name);
    printf("Age: %d\n",Student1.Person1.age);
    printf("ID: %d",Student1.ID);

    return 0;
}
