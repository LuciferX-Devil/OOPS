#include <stdio.h>

int factorial(int x);

int main(){
    int a;
    printf("Enter value: ");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,factorial(a));
    return 0;
}

int factorial(int x){
    int f;
    if(x==1){
        return 1;
    }
    else{
        f=x*factorial(x-1);
        return f;
    }
}
