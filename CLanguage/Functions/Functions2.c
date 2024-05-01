#include <stdio.h>

void swapper(int *x,int *y);

int multiply(int a,int b);

int main(){
    int a = 10; int b = 20;
    printf("Values of a,b before swapping: %d,%d\n",a,b);
    swapper(&a,&b);
    printf("Multiplication of a and b is %d",multiply(a,b));
    return 0;
}

void swapper(int *x,int *y){
    int temp = 0;
    temp=*x;
    *x = *y;
    *y=temp;
    printf("After swapping: %d,%d\n",*x,*y);
}

int multiply(int a,int b){
    return a*b;
}
