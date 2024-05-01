//A library has multiple books and each book has a title, author, and ISBN number. The
//library wants to keep track of the books that are currently available and the books that
//have been borrowed by the members. Design a program using OOPs and class and object to
//implement this scenario. (MODULE 5 - HARD)

#include <iostream>

using namespace std;

class Book{
    public:
    string title;
    string author;
    int isbn_num;
};


int main(){

    Book books[5];

    books[0].title="Poopsikins1";books[0].author="Chris";books[0].isbn_num=101;
    books[1].title="Poopsikins2";books[1].author="Whipped";books[1].isbn_num=102;
    books[2].title="Poopsikins3";books[2].author="Chris";books[2].isbn_num=103;
    books[3].title="Poopsikins4";books[3].author="Whipped";books[3].isbn_num=104;
    books[4].title="Poopsikins5";books[4].author="Chris";books[4].isbn_num=105;

    int input;
    cout<<"1. Title Search, 2. Author Search, 3. ISBN Number Search: ";cin>>input;
    while(input!=1 and input!=2 and input!=3){cout<<"Invalid Input. Try again: ";cin>>input;}
    if(input==1){
        string Title;cout<<"Enter Title: ";cin>>Title;
        bool found=0;for(int i=0;i<5;i++){if(Title==books[i].title){found = 1;}}if(found==1){cout<<"Match Found!";}else{cout<<"Nothing found!";}
    }
    else if(input==2){
        string Author;cout<<"Enter Author: ";cin>>Author;
        bool found=0;for(int i=0;i<5;i++){if(Author==books[i].author){found = 1;}}if(found==1){cout<<"Match Found!";}else{cout<<"Nothing found!";}
    }
    else if(input==3){
        int ISBN_Num;cout<<"Enter ISBN Number: ";cin>>ISBN_Num;
        bool found=0;for(int i=0;i<5;i++){if(ISBN_Num==books[i].isbn_num){found = 1;}}if(found==1){cout<<"Match Found!";}else{cout<<"Nothing found!";}   
    }
    return 0;
}
