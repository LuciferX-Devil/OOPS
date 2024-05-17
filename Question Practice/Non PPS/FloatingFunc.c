#include <stdio.h>

void mathFunc(float x){
    if(x<-1){
        printf("%.1f",x+2);
    }
    else if(x>=-1 && x<=1){
        printf("%.1f",x*x);
    }
    else if(x>1){
        printf("%.1f",2-x);
    }
    return;
}

int main(){
    float num;
    scanf("%f",&num);
    mathFunc(num);

    return 0;
}
