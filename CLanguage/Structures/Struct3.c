#include <stdio.h>

struct Time{
    int hours;
    int minutes;
    int seconds;
}Time1,Time2,added;

int main(){

    printf("Enter Initial Time\n");
    printf("Enter hours: ");
    scanf("%d",&Time1.hours);
    printf("Enter minutes: ");
    scanf("%d",&Time1.minutes);
    printf("Enter seconds: ");
    scanf("%d",&Time1.seconds);

    printf("Enter Final Time\n");
    printf("Enter hours: ");
    scanf("%d",&Time2.hours);
    printf("Enter minutes: ");
    scanf("%d",&Time2.minutes);
    printf("Enter seconds: ");
    scanf("%d",&Time2.seconds);


    added.hours = Time1.hours+Time2.hours;
    added.minutes=Time1.minutes+Time2.minutes;
    added.seconds=Time1.seconds+Time2.seconds;
    if(added.seconds>=60){
        added.minutes+=1;
        added.seconds=added.seconds-60;
    }
    if(added.minutes>=60){
        added.hours+=1;
        added.minutes=added.minutes-60;
    }

    printf("Time: %d:%d:%d",added.hours,added.minutes,added.seconds);

    return 0;
}
