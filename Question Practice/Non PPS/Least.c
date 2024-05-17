#include <stdio.h>
#include <math.h>

void Sumsorter(int array[10],int sum[45]);

void Summer(int array[10]){
    int sum[45]; int temp; int k = 0;
    while(k<45){
        for(int i=0;i<10;i++){
            for(int j=i+1;j<10;j++){
                sum[k] = abs(array[i] + array[j]);
                k++;
            }
        }
    }
    Sumsorter(array,sum);
    return;
}

void Sumsorter(int array[10],int sum[45]){
    for(int i=0;i<45;i++){
        for(int j=i+1;j<45;j++){
            if(sum[j]<sum[i]){
            int temp = sum[i];
            sum[i]=sum[j];
            sum[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        for(int j = i+1;j<10;j++){
            if(abs(array[i]+array[j])==sum[0]){
                printf("%d,%d",array[i],array[j]);
                break;
            }
        }
    }
    return;
}

int main(){
    int array[10] = {38,44,63,-51,-35,19,84,-69,4,-46};
    Summer(array);

    return 0;
}
