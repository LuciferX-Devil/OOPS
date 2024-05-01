#include <iostream>
#include <string.h>

using namespace std;

class Dynamic{
    private:
    int length;
    char *name;
    public:
    Dynamic(){
        length=0;
        name = new char[length+1];
    }
    Dynamic(char *s){
        length=strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }
    void show(){
        cout<<name<<endl<<length;
    }
};

int main(){
    char *first = "Hello !";
    Dynamic obj1(first);
    obj1.show();
    Dynamic obj2("Technology");
    obj2.show();
}
