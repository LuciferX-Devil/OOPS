#include <stdio.h>

int NumberPrinter(int i){
       if(i!=50){
        printf(" %d ",i);
        NumberPrinter(i+1);
    }
}

int main(){
    int i=1;
    NumberPrinter(i);
    
    return 0;}
