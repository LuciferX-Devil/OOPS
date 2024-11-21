#include <stdio.h>

void countsort(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }

    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    
    for(int i=1;i<=max;i++){
        count[i] += count[i-1];
    }

    int output[size];
    for(int i =size-1;i>=0;i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for(int i=0;i<size;i++){
        printf("%d ",output[i]);
    }

}


int main(){
    int array[] ={4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(array)/sizeof(array[0]);
    countsort(array,size);

    return 0;
}
