#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void appendNode(struct Node** head,int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if((*head)==NULL){
        *head = newNode;
    }
    else{
        struct Node* current = *head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newNode;
    }
}

void display(struct Node* head){
    if(head==NULL){printf("LL is empty!\n");}
    else{
        struct Node* current = head;
        while(current!=NULL){
            printf("%d\n",current->data);
            current=current->next;
        }
    }
}

void memClear(struct Node* head){
    struct Node* current = head;
    struct Node* tempNode;
    while(current!=NULL){
        tempNode = current->next;
        free(current);
        current = tempNode;
    } 
}

int main(){ 
    struct Node* head = NULL;
    display(head);

    appendNode(&head,10);
    appendNode(&head,20);
    appendNode(&head,30);
    display(head);

    memClear(head);
    return 0;
}
