/*Develop a program to print an arrangement of its members into a sequence or linear
order, and the order is not repeated again. (Module-1, Hard) */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void Jumbler(char input[], char temp[], int index){
    if(index==strlen(input)){
        printf("%s\n",temp);
        return;
    }

    for(int i=0;i<strlen(input);i++){
        bool checker = false;
        for(int j=0;j<index;j++){
            if(temp[j]==input[i]){
                checker=true;
                break;
            }
        }
        if(checker!=true){
            temp[index]=input[i];
            Jumbler(input,temp,index+1);
        }
    }
}

void tempString(char input[],int digits){
    char temp[digits];
    Jumbler(input,temp,0);
}


int main(){
    int digits;
    printf("Enter number of digits: ");
    scanf("%d",&digits);
    char input[digits];
        printf("Enter the Number: ");
        scanf("%s",input);
        tempString(input,digits);
    return 0;
}
