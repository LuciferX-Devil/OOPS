#include <stdio.h>

int main(){
    int square(int x);
    int (*pCaller)(int x);
    pCaller=square;
    int a=(*pCaller)(5);
    printf("%d",a);
    return 0;
}
int square(int x){
    return x*x;
}
