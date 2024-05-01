// 3. Write a menu driven program in 'C' which shows the working of library. The menu option
//should be
//i) Add book details.
//ii) Display book details.
//iii) List all books of given author.
//iv) List the count of books in the library.
//v) Exit
//(Module -4, Hard) 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Book{
    int b_no;
    char b_name[20];
    char b_author[20];
    int b_pages;
};


int j=0;
struct Book book[100];


void bookAdd(int records){
    printf("Add Details of %d Book: \n",records);
    for(int i=j;i<j+records;i++){
        printf("---------------------\n");
        printf("Enter Book No. : ");
        scanf("%d",&book[i].b_no);
        getchar();
        printf("Book Name : ");
        fgets(book[i].b_name, sizeof(book[i].b_name), stdin);
        printf("Enter Author Name : ");
        fgets(book[i].b_author, sizeof(book[i].b_author), stdin);
        printf("Enter No. of Pages : ");
        scanf("%d",&book[i].b_pages);
        printf("---------------------\n");
    }    
    j+=records;    
}


void bookDisplay(){
    printf("Details of all books\n");
    if(j==0){printf("No books added, add some!\n");}
    else{
    for(int i=0;i<j;i++){
        printf("%d\n",book[i].b_no);
        printf("%s\n",book[i].b_name);
        printf("%s\n",book[i].b_author);
        printf("%d\n",book[i].b_pages);
    }
    }
}


void authSearch(char author[15]){
    for(int i=0;i<j;i++){
        if(strcmp(author,book[i].b_author)==0){
        printf("%d\n",book[i].b_no);
        printf("%s\n",book[i].b_name);
        printf("%s\n",book[i].b_author);
        printf("%d\n",book[i].b_pages);
        }
    }
    printf("No match found\n");
}


int main(){
    int input;
    while(input!=5){
        printf("                  Menu\n");
        printf("-----------------------------------------------\n");
        printf("PRESS 1.TO ADD BOOK DETAILS.\n");
        printf("PRESS 2.TO DISPLAY BOOK DETAILS.\n");
        printf("PRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.\n");
        printf("PRESS 4.TO COUNT NUMBER OF BOOKS.\n");
        printf("PRESS 5.TO EXIT.\n");
        printf("-----------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d",&input);
        if(input==1){int records;printf("How Many Records You Want to Add: ");scanf("%d",&records);printf("---------------------\n");bookAdd(records);}
        if(input==2){bookDisplay();}
        if(input==3){char author[20]; getchar();printf("Enter author name: ");fgets(author,sizeof(author),stdin);authSearch(author);}
        if(input==4){printf("Total number of books= %d",j);}
        while(input<1||input>5){printf("Invalid input, Try Again");scanf("%d",&input);}
    }


    return 0;
}
