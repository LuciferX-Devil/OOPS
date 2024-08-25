//Insert Restricted
#include <stdio.h>

int array[5];
int front=0;
int rear=-1;
int count=0;

void enQueue(int value){
    if(count>=5){printf("Queue overflow.\n");}
    else{
        rear++;if(rear>=5){rear=0;}
        count++;
        array[rear]=value;
        printf("Added %d\n",value);
    }
}

void deQueue(){
    if(count<=0){printf("Queue Underflow.\n");}
    else{
        int forb;printf("1.Front\n2.Rear\n");scanf("%d",&forb);
        switch(forb){
            case 1:
            printf("Popped %d\n",array[front]);
            front++;if(front>=5){front=0;}
            count--;break;
            case 2:
            printf("Popped %d\n",array[rear]);
            rear--;if(rear<0){rear=4;}
            count--;break;
            default:
            printf("Select a proper input!\n");break;
        }
    }   
}

void display(){
    if(count<=0){printf("Queue underflow.\n");}
    else{
        int j = front;
        for(int i=0;i<count;i++){
            printf("%d ",array[j]);
            j=(j+1)%5;            
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
            int value;scanf("%d",&value);
            enQueue(value);break;
            
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
