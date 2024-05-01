#include <stdio.h>

int largest(int array[]);

int main(){
    int array[]={20,30,50,40,60};
    int biggest=largest(array);
    printf("%d",biggest);
    return 0;
}

int largest(int array[]){
    int biggest=array[0];
    for(int i =0;i<5;i++){
        if(array[i]>biggest){
            biggest=array[i];
        }
    }
    return biggest;
}
