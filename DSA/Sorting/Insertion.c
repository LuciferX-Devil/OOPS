#include <stdio.h>

int main(){
    int array[] = {10,19,15,7,14,5};int i=0;
    for(int j=1;j<sizeof(array)/4+1;j++){
        i=j-1;
        while(i>0 && array[i-1]>array[i]){
            int temp=array[i-1];array[i-1]=array[i];array[i]=temp;
            i--;
        }
    }
    for(int i=0;i<sizeof(array)/4;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
