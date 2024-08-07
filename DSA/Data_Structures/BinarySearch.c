#include <stdio.h>


void BinarySearcher(int array[],int n,int mid,int temp,int size){
    if(n!=array[mid]){
        if(n<array[mid]){
            mid/=2;
            if(mid==0){printf("No matches Found!");}
            else if(n==array[mid]){printf("Match found!");}
            else
            BinarySearcher(array,n,mid,temp,size);
        }
        else if(n>array[mid]){
            mid=(mid/2)+temp;
            if(mid==size){printf("No matches Found!");}
            else if(n==array[mid]){printf("Match found!");}
            else
            BinarySearcher(array,n,mid,temp,size);
        }
    }
    
}

int main(){
    int n;
    int array[]={5,10,15,20,25,30,40};
    int size = sizeof(array)/sizeof(int);
    int temp=size-3;
    int mid=(int)((size/2));
    scanf("%d",&n);
    BinarySearcher(array,n,mid,temp,size);

    return 0;
}
