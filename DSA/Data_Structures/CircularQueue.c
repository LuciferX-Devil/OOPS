#include <stdio.h>
#include <stdlib.h>

int front = 0;
int rear = -1;
int count=0;

void enQueue(int queue[],int capacity){
    if(count==capacity){printf("Queue Overflow!\n");}
    else{
        int value;if(scanf("%d",&value)!=1){printf("Entry is not an int!");while(getchar()!='\n'){continue;}exit(EXIT_FAILURE);}
        rear=(rear+1)%capacity;
        queue[rear]=value;
        printf("Appended %d to the end of the queue!",queue[rear]);
        count++;
    }
}

void deQueue(int queue[],int capacity){
    if(count==0){printf("Queue is empty!\n");}
    else{
        printf("Popped %d from the front of the queue!\n",queue[front]);
        front=(front+1)%capacity;
        count--;
    }
}

void display(int queue[],int capacity){
    if(count==0){printf("Queue is empty!\n");}
    else{
        int j=front;
        for(int i=0;i<count;i++){
            printf("%d\n",queue[j]);
            j=(j+1)%capacity;
        }
    }
}

int main(){
    int capacity;printf("Enter final size of queue: ");if(scanf("%d",&capacity)!=1){printf("Entry is not an int!");while(getchar()!='\n'){continue;}exit(EXIT_FAILURE);};
    int input=0;
    int *queue = (int*)malloc(capacity*sizeof(int));if(queue==NULL){printf("DMA_FAILURE");exit(EXIT_FAILURE);}
    else{
        while(input!=4){
            printf("What do you wanna do?:\n1.Enqueue\n2.deQueue\n3.Display Queue\n4.Exit\n");
            if(scanf("%d",&input)!=1){printf("Entry is not an int!");while(getchar()!='\n'){continue;}exit(EXIT_FAILURE);}
            switch(input){
                case 1:
                enQueue(queue,capacity);break;

                case 2:
                deQueue(queue,capacity);break;

                case 3:
                display(queue,capacity);break;

                case 4:
                printf("Exitting Interface...");
                break;

                default:
                printf("Enter a valid input!(1-4)\n");
                break;
            }
        }
    }
    free(queue);

    return 0;
}
