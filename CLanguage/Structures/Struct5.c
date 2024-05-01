#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
}Date1,Date2,Difference;

int main(){
   
    printf("-----Day1-----\n");
    printf("Enter day: ");
    scanf("%d",&Date1.day);
    printf("Enter month: ");
    scanf("%d",&Date1.month);
    printf("Enter year: ");
    scanf("%d",&Date1.year);

    printf("-----Day2-----\n");
    printf("Enter day: ");
    scanf("%d",&Date2.day);
    printf("Enter month: ");
    scanf("%d",&Date2.month);
    printf("Enter year: ");
    scanf("%d",&Date2.year);


    Difference.day=abs(Date1.day-Date2.day);
    Difference.month=abs(Date1.month-Date2.month);
    Difference.year=abs(Date1.year-Date2.year);
    if(Difference.day>=30){
        Difference.month+=1;
        Difference.day=Difference.day-30;
    }

    if(Difference.month>=12){
        Difference.year+=1;
        Difference.month=Difference.month-12;
    }
    int days=Difference.day+30*Difference.month+365*Difference.year;
    printf("The date difference is %d",days);
    return 0;
}
