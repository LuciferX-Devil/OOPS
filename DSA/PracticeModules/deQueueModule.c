#include <stdio.h>
#include <stdlib.h>

void deQueue(int **queue,int *size){
    printf("Popped %d\n",(*queue)[0]);
    for(int i=1;i<(*size);i++){
        (*queue)[i-1]=(*queue)[i];
    }
    (*size)--;
    int *temp = realloc((*queue),(*size)*sizeof(int));
    if(temp==NULL){printf("DMA_FAILURE");exit(EXIT_FAILURE);}
    else{(*queue)=temp;}
}

void display(int queue[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    int *queue = malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        queue[i]=i+1;
    }
    int size=5;
    display(queue,size);

    deQueue(&queue,&size);
    display(queue,size);

    deQueue(&queue,&size);
    display(queue,size);

    free(queue);
    return 0;
}
