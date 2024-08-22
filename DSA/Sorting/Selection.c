#include <stdio.h>

int main(){
    int array[] = {90,70,60,20,5,30,25};
    for(int j=0;j<sizeof(array)/4;j++){
        int smallest=0;
        smallest+=j;
        for(int i=j;i<sizeof(array)/4;i++){
            if(array[i]<array[smallest]){smallest=i;}            
        }
        int temp=array[j];array[j]=array[smallest];array[smallest]=temp;
    }
    for(int i=0;i<sizeof(array)/4;i++){printf("%d ",array[i]);}
    return 0;
}
