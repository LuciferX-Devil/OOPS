#include <stdio.h>

int main(){
    int array[]={1,2,3,4,5};
    int *pAvalue;
    int sum=0;
    pAvalue=&array[0];
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        sum=sum+ *pAvalue;
        pAvalue++;
    }
    printf("%d",sum);
    return 0;
}
