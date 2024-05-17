#include <stdio.h>
#include <stdbool.h>

void dupCheck(int *library){
    bool check[10]={false}; int i = 0;
    for(i;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(*(library+i)==*(library+j)){
                check[i]=true;
            }            
        }
    }
    for(i=0;i<10;i++){
        if(check[i]==false){
            printf("%d,",*(library+i));
        }
    }
}

int main(){
    int library[10] = {101,102,102,103,105,106,105,107,110,106};
    int *ptr = &library[0];
    dupCheck(ptr);
    return 0;
}
