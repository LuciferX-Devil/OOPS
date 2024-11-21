#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a=*b; *b=temp;
}

int partition(int a[],int low,int high){
    int pivot = a[high]; int j=low-1;
    for(int i=low;i<high;i++){
        if(a[i]<pivot){
            j++; swap(&a[j],&a[i]);
        }
    }
    swap(&a[j+1],&a[high]);
    return j+1;
}

void quickSort(int a[],int low,int high){
    if(low<high){
        int PI = partition(a,low,high);

        quickSort(a,low,PI-1);
        quickSort(a,PI+1,high);
    }
}

int main(){
    int array[] = {60,40,70,10,90,20,50};
    
    quickSort(array,0,(sizeof(array)/4)-1);
    for(int i=0;i<sizeof(array)/4;i++){
        printf("%d ",array[i]);
    }
}
