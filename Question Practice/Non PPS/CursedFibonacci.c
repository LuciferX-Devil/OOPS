#include <stdio.h>

int cursedFib(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{        
        return cursedFib(n-1) + cursedFib(n-2);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("%d ",cursedFib(i));
    }

    return 0;
}  
