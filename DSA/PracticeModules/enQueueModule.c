#include <stdio.h>
#include <stdlib.h>

void enQueue(int **queue,int *size,int value){
    int *temp=realloc(*queue,((*size)+1)*sizeof(int));
    if(temp==NULL){printf("DMA Failure!");exit(EXIT_FAILURE);}
    else{
        *queue=temp;
        for(int i = (*size);i>0;i--){
            (*queue)[i] = (*queue)[i-1];
        }
        (*queue)[0] = value;
        (*size)++;
    }
}

void display(int queue[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    int size;
    scanf("%d",&size);
    int *queue = malloc(size*sizeof(int));
    if(queue==NULL){printf("DMA Failure!");exit(EXIT_FAILURE);}
    else
    {for(int i=0;i<size;i++){queue[i]=i+1;}
    enQueue(&queue,&size,0);
    display(queue,size);

    enQueue(&queue,&size,-1);
    display(queue,size);
    }

    free(queue);
    return 0;
}
