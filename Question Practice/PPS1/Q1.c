/*Construct a program to read the numbers until -1 is encountered. Find the average of
positive numbers and negative numbers entered by user. (Module-1, Easy)*/

#include <stdio.h>

int main(){
    float input,negsum=0,possum=0,poscount=0,negcount=0;
    while(input!=-1){
        printf("Enter Number: ");scanf("%d",&input);
        if(input>0){possum+=input;poscount++;}else if(input<-1){negsum+=input;negcount++;}else if(input==0){printf("Retard.\n");}
    }
    printf("Positive: %f\nNegative: %f",possum/poscount,negsum/negcount);

    return 0;
}
