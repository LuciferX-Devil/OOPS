#include <stdio.h>

struct Book{
    char title[24];
    char author[12];
    float price;
};

int main(){

    struct Book book[3];


    for(int i=0;i<3;i++){
        printf("Enter title of the book: ");
        scanf("%s",book[i].title);
        
        printf("Enter author of the book: ");
        scanf("%s",book[i].author);

        printf("Enter price of the book: ");
        scanf("%f",&book[i].price);
    }

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(book[i].price>book[j].price){
                struct Book temp=book[i];
                book[i]=book[j];
                book[j]=temp;
            }
        }
    }
    printf("Most Expensive Book is: ");
    printf("Title: %s\n",book[2].title);
    printf("Author: %s\n",book[2].author);
    printf("Price: %f\n",book[2].price);

    printf("Least Expensive Book is: ");
    printf("Title: %s\n",book[0].title);
    printf("Author: %s\n",book[0].author);
    printf("Price: %f\n",book[0].price);

    return 0;
}
