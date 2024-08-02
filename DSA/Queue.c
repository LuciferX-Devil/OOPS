#include <stdio.h>
#include <stdlib.h>

void enQueue(int **queue, int* size){
    int value;if(scanf("%d",&value)!=1){printf("Entry is not an int!");while(getchar()!='\n'){continue;}exit(EXIT_FAILURE);}

    int *temp = realloc(*queue,((*size)+1)*sizeof(int));
    if(temp==NULL){printf("DMA_FAILURE");exit(EXIT_FAILURE);}
    else{
        (*queue)[(*size)]=value;
        (*size)++;
        printf("Added value: %d. New size of queue is %d\n",value,(*size)-1);
    }
}

void deQueue(int **queue,int* size){
    if((*size)<=0){printf("Queue is empty!\n");}
    else{
        printf("Dequeued %d! ",(*queue)[0]);
        for(int i=1;i<(*size);i++){
            (*queue)[i-1]=(*queue)[i];
        }
        (*size)--;
        if((*size==0)){free((*queue));(*queue)=NULL;}
        else
        {int *temp = realloc((*queue),((*size))*sizeof(int));
            if(temp==NULL){printf("DMA_FAILURE");exit(EXIT_FAILURE);}
            else{(*queue)=temp;}
        }
        printf("New size is %d.\n",(*size));
    }
}

void peek(int queue[]){
    printf("First element in the queue is %d\n",queue[0]);
}

void display(int queue[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    int size=0;     
    int input;
    int *queue = malloc(sizeof(int));if(queue==NULL){printf("DMA_FAILURE");exit(EXIT_FAILURE);}
    else{
        while(input!=5){
            printf("What do you wanna do?:\n1.Enqueue\n2.deQueue\n3.Peek\n4.Display Queue\n");
            if(scanf("%d",&input)!=1){printf("Entry is not an int!");while(getchar()!='\n'){continue;}exit(EXIT_FAILURE);}
            switch(input){
                case 1:
                enQueue(&queue,&size);break;

                case 2:
                if(size<=-1){printf("Queue is empty!\n");}
                else{deQueue(&queue,&size);}break;

                case 3:
                if(size<=0){printf("Queue is empty!\n");}
                else{peek(queue);}break;

                case 4:
                if(size<=0){printf("Queue is empty!\n");}
                else{display(queue,size);}break;

                case 5:
                printf("Exitting Interface...");
                break;

                default:
                printf("Enter a valid input!(1-5)\n");
                break;
            }
        }
    }
    return 0;
}
