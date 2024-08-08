#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void BufferClearer(int* input){
    if((scanf("%d",input))!=1){printf("Entry not an int!\n");while(getchar()!='\n'){continue;}exit(EXIT_FAILURE);}
}

void AppendNode(struct Node** head){
    int value;
    printf("Enter value to append: ");BufferClearer(&value);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){printf("DMA_FAILURE");exit(EXIT_FAILURE);}
    else{
    newNode->data=value;newNode->next=NULL;

    if(*head==NULL){
        *head=newNode;
    }
    else{
        struct Node* current = *head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newNode;
    }
    }
    printf("Appended %d!\n",value);
}

void DeleteNode(struct Node** head){
    if(*head==NULL){printf("Linked List is empty!\n");}
    else{
    int value;
    printf("Enter value to delete (This will only delete the first instance of the value!): ");BufferClearer(&value);
    struct Node* current = *head;
    struct Node* previous = NULL;

    while(current!=NULL){
        if(current->data==value){
            printf("Deleted %d!\n",current->data);
            if(previous==NULL){*head=current->next;}
            else{
                previous->next=current->next;
            }
            free(current);
            return;
        }
        previous = current;
        current=current->next;
    }
    }
}

void Display(struct Node* head){
    struct Node* current = head;
    if(current==NULL){printf("Linked List is empty!\n");}
    else{
        while(current!=NULL){
            printf("%d ",current->data);
            current=current->next;
        }
        printf("\n");
    }
}

void memClearer(struct Node* head){
    struct Node* current = head;
    struct Node* temp=NULL;
    while(current!=NULL){
        temp=current->next;
        free(current);
        current=temp;
    }
}

int main(){
    struct Node* head = NULL;
    int input = 0;
    while(input!=4){
        printf("What do you wanna do?\n1.Append\n2.Delete\n3.Display\n4.Exit\n");
        BufferClearer(&input);
        switch(input){
            case 1:
            AppendNode(&head);break;

            case 2:
            DeleteNode(&head);break;

            case 3:
            Display(head);break;

            case 4:
            printf("Exitting Interface...\n");break;

            default:
            printf("Enter a valid choice 1-4.\n");break;
        }
    }

    return 0;
}
