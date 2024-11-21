#include <stdio.h>

void merge(int array[],int left, int mid, int right){
    int size1 = mid-left + 1;
    int size2 = right-mid;

    int leftArr[size1],rightArr[size2];
    for(int i=0;i<size1;i++){
        leftArr[i] = array[left+i];
    }

    for(int i=0;i<size2;i++){
        rightArr[i] = array[mid+1+i];
    }

    int i=0; int j=0; int k=left;
    while(i<size1 && j<size2){
        if(leftArr[i]<rightArr[j]){
            array[k] = leftArr[i];
            i++;
        }
        else if(leftArr[i]>rightArr[j]){
            array[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while(i<size1){
        array[k]=leftArr[i];
        i++;k++;
    }

    while(j<size2){
        array[k] = rightArr[j];
        j++;k++;
    }

}

void mergeSort(int array[],int left,int right){
    if(left<right){
        int mid = left+(right-left)/2;

        mergeSort(array,left,mid);
        mergeSort(array,mid+1,right);

        merge(array,left,mid,right);
    }
}

int main(){
    int array[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(array)/sizeof(array[0]);
    mergeSort(array,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
