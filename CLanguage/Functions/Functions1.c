#include <stdio.h>

void swapper(int i,int j,int array[]){
    int tmp=0;
    tmp=array[i];
    array[i]=array[j];
    array[j]=tmp;
}

void checker(int i,int j,int array[]){
    if (array[i]<array[j]){
        swapper(i,j,array);
    }
}


void printer(int array[]){
    printf("\n");
    for(int i=0;i<6;i++){
        printf("%d ",array[i]);
    }
}

void iter(int array[]){
    for (int i=0;i<6;i++){
        for (int j=i+1;j<6;j++){
            checker(i,j,array);
        }
    }
    printer(array);
}


int main(){
    int array[] = {20,12,28,60,14,40};
    printer(array);
    iter(array);
    return 0;
}



/*
void inputter(int i,int array[]){
    for(i=0;i<6;i++){
        printf("Enter number: ");
        scanf("%d",&array[i]);

    }
}
*/
