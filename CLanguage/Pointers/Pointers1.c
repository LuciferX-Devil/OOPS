#include <stdio.h>

int main(){
    int array[5]={3,4,5,6};
    int *pAvalue;
    pAvalue=&array[0];
    printf("Address of first element= %x\n",pAvalue);
    printf("Value at that address= %d\n", *pAvalue);
    printf("Value of First element= %d\n",array[0]);
    printf("Value at the next address= %d\n", *pAvalue+1);
    return 0;
}
