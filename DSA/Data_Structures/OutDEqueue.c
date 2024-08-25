//Output restricted 

#include <stdio.h>

int array[3];
int front=0;
int rear=-1;
int count=0;

void enQueue(){
    if(count>=3){printf("Queue overflow!\n");}
    else{
        printf("Enter value to enqueue: ");int value;scanf("%d",&value);
        printf("Where do you wanna Enqueue?\n1.Front\n2.Back\n");int forb;scanf("%d",&forb);
        switch(forb){
            case 1:
            front--;if(front<0){front=2;}
            array[front]=value;printf("Added %d to the front of the queue!\n",value);
            count++;break;

            case 2:
            rear++;if(rear>=3){rear=0;}
            array[rear]=value;printf("Added %d to the back of the queue!\n",value);
            count++;break;

            default:
            printf("Enter a valid choice!\n");break;
        }
    }
}

void deQueue(){
    if(count<=0){printf("Queue underflow!\n");}
    else{
        printf("Dequeued %d\n",array[rear]);
        rear--;if(rear<0){rear=2;}
        count--;
    }
}

void display(){
    if(count==0){printf("Queue underflow!\n");}
    else{
        int j=front;
        for(int i=0;i<count;i++){
            printf("%d ",array[j]);
            j=(j+1)%3;
        }
        printf("\n");
    }
}

int main(){
    int input;
    while(input!=4){
        printf("What do you wanna do?\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&input);
        switch(input){
            case 1:
            enQueue();break;
            
            case 2:
            deQueue();break;

            case 3:
            display();break;

            case 4:
            printf("Exitting Interface...\n");break;

            default:
            printf("Enter a valid choice!\n");break;
        }
    }
    return 0;
}
