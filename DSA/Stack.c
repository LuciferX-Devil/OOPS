#include <stdio.h>
#include <stdlib.h>

void push(int stack[],int *top,int value){
    (*top)++;
    stack[*top]=value;
    printf("Value: %d pushed to stack. New top value is %d!\n",value,*top);
}

void pop(int stack[],int *top){
    printf("Value: %d popped from stack. ",stack[*top]);
    (*top)--;
    printf("New top value is %d!\n",top);
}

void display(int stack[],int top){
    for(int i=top;i>-1;i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
    int size;
    printf("Enter final size of stack: ");
    if(scanf("%d",&size)!=1){printf("Entry is not an int!");while(getchar()!='\n'){continue;}exit(EXIT_FAILURE);}
    int stack[size];
    int top = -1;
    int input;
    while(input!=4){
        printf("Choose what you want to do:\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        if(scanf("%d",&input) != 1){printf("Entry is not an int!");while(getchar()!='\n'){continue;}exit(EXIT_FAILURE);}
        switch(input){
            case 1:
            if(top>=size-1){printf("Stack overflow!\n");}
            else{int value; printf("Enter value to be pushed: ");if(scanf("%d",&value)!=1){printf("Entry is not an int!\n");while(getchar()!='\n'){continue;}};push(stack,&top,value);}
            break;

            case 2:
            if(top<=-1){printf("Stack Underflow!\n");}
            else{pop(stack,&top);}
            break;

            case 3:
            if(top<=-1){printf("Stack Underflow!\n");}
            else{display(stack,top);}
            break;

            case 4:
            printf("Exitting interface...");
            break;

            default:
            printf("Undefined choice. Try again\n");
        }
    }

    return 0;
}
