#include <stdio.h>

void BinarySearcher(int array[],int value,int mid,int left,int right){
    if(left>right){printf("Number not found!");return;}
    if(array[mid]==value){printf("Number found at %d!",mid);return;}
    else if(value<array[mid]){
        right=mid-1;
        if(((right+left)/2)%2!=0){
            mid=(right+left)/2;
        }
        else{mid=(right+left)/2;}
        BinarySearcher(array,value,mid,left,right);
    }
    else if(value>array[mid]){
        left=mid+1;
        if(((right+left)/2)%2!=0){
            mid=(right+left)/2;
        }
        else{mid=(right+left)/2;}
        BinarySearcher(array,value,mid,left,right);
    }
}

int main(){
    int array[]={5,10,15,20,25,30,40};    
    int mid = (sizeof(array)/4)/2;
    int left = 0; int right=sizeof(array)/4-1;
    BinarySearcher(array,10,mid,left,right);
    return 0;
}
