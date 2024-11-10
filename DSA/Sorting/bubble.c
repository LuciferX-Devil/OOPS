#include <stdio.h>
#include <stdbool.h>

int main(){
    int array[] = {20,40,50,30,10};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(array[i]>array[j]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
