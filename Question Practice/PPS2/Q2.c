// 2. Write a C-program to create student structure having field roll_no, stud_name and
//course. Pass this entire structure to function and display the structure elements. (Module
// -4, Easy)

#include <stdio.h>

struct Student{
    int roll_no;
    char stud_name[12];
    char course[15];
};

void dispDeets(int a,char b[12],char c[15]){
    printf("Roll No.: %d\n",a);
    printf("Name: %s\n",b);
    printf("Course: %s\n",c);
}

int main(){
    struct Student s1;
    printf("Roll No: ");
    scanf("%d",&s1.roll_no);
    printf("Name: ");
    scanf("%s",s1.stud_name);
    printf("Course: ");
    scanf("%s",s1.course);

    dispDeets(s1.roll_no,s1.stud_name,s1.course);

    return 0;
}
