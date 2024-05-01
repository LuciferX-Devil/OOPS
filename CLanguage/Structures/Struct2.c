#include <stdio.h>

struct Student{
    char stu_name[12];
    int stu_age;
    int stu_marks;
}student1,student2;


int main(){

    printf("Enter name of Student 1: ");
    scanf("%s",student1.stu_name);

    printf("Enter age of Student 1: ");
    scanf("%d",&student1.stu_age);

    printf("Enter marks of student 1: ");
    scanf("%d",&student1.stu_marks);

    printf("Enter name of Student 2: ");
    scanf("%s",student2.stu_name);

    printf("Enter age of Student 2: ");
    scanf("%d",&student2.stu_age);

    printf("Enter marks of student 2: \n");
    scanf("%d",&student2.stu_marks);    

    printf("Student 1 info\n");
    printf("Name: %s\n",student1.stu_name);
    printf("Age: %d\n",student1.stu_age);
    printf("Marks: %d\n",student1.stu_marks);


    printf("Student 2 info\n");
    printf("Name: %s\n",student2.stu_name);
    printf("Age: %d\n",student2.stu_age);
    printf("Marks: %d\n",student2.stu_marks);   

    int avg=(student1.stu_marks+student2.stu_marks)/2;

    printf("Average: %d",avg);

return 0;
}
