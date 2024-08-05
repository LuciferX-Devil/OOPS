#include <stdio.h>
#include <stdlib.h>

struct Carriage{
    int number;
    struct Carriage* next;
};

void Adder(struct Carriage** engine,int passenger){
    struct Carriage* newCarriage = (struct Carriage*)malloc(sizeof(struct Carriage));
    newCarriage->number=passenger;newCarriage->next=NULL;

    if(*engine==NULL){*engine=newCarriage;}

    else{
        struct Carriage* currentCarriage = *engine;
        while(currentCarriage->next!=NULL){
            currentCarriage=currentCarriage->next;
        }
        currentCarriage->next=newCarriage;
    }
}

void display(struct Carriage *engine){
    if(engine==NULL){printf("Track is empty!\n");}

    else{
        struct Carriage* currentCarriage = engine;
        while(currentCarriage!=NULL){
            printf("%d\n",currentCarriage->number);
            currentCarriage=currentCarriage->next;
        }
    }
}

void memClear(struct Carriage *engine){
    struct Carriage* currentCarriage = engine;
    struct Carriage* tempCarriage;

    while(currentCarriage!=NULL){
        tempCarriage = currentCarriage->next;
        free(currentCarriage);
        currentCarriage = tempCarriage;
    }
}

int main(){
    struct Carriage* engine = NULL;
    display(engine);

    Adder(&engine,10);
    Adder(&engine,20);
    Adder(&engine,30);
    display(engine);

    free(engine);

    return 0;
}
