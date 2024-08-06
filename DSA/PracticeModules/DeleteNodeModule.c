#include <stdio.h>
#include <stdlib.h>

struct Train{
    int passenger;
    struct Train* next;
};

void Adder(struct Train** engine,int value){
    struct Train* newCarriage = (struct Train*)malloc(sizeof(struct Train));
    newCarriage->passenger = value;
    newCarriage->next = NULL;

    if(*engine==NULL){
        *engine = newCarriage;
    }

    else{
        struct Train* currentCarriage = *engine;
        while(currentCarriage->next!=NULL){
            currentCarriage=currentCarriage->next;
        }
        currentCarriage->next=newCarriage;
    }
}

void Deleter(struct Train** engine,int value){
    struct Train* currentCarriage = *engine;
    struct Train* prevCarriage = NULL;
    while(currentCarriage!=NULL){
        if(currentCarriage->passenger == value){}

        else{
            currentCarriage = currentCarriage->next;
        }
    }
}

void display(struct Train* engine){
    if(engine==NULL){printf("LL is empty!\n");}
    else{
        struct Train* currentCarriage = engine;
        while(currentCarriage!=NULL){
            printf("%d\n",currentCarriage->passenger);
            currentCarriage=currentCarriage->next;
        }
    }
}

void memClearer(struct Train* engine){
    struct Train* currentCarriage = engine;
    struct Train* tempCarriage;

    while(currentCarriage!=NULL){
        tempCarriage = currentCarriage->next;
        free(currentCarriage);
        currentCarriage = tempCarriage;
    }
}

int main(){
    struct Train* engine = NULL;
    display(engine);

    Adder(&engine,10);
    Adder(&engine,20);
    Adder(&engine,30);
    display(engine);

    return 0;
}
