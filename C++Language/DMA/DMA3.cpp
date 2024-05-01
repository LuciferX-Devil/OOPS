
#include <iostream>
using namespace std;

class Hola{
    private:
    int size;
    int *data;
    public:
    Hola(int a) : size(a){
        data = new int[size];
        for(int i=0;i<size;i++){
            data[i]=i;
        }
        cout<<"Normal constructor was called!"<<endl;
    }

    Hola(const Hola& wuteva) : size(wuteva.size), data(new int[size]){
        for(int i=0;i<size;i++){
            data[i]=i;
        }           
        cout<<"Copy constructor called!"<<endl;
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<data[i]<<endl;
        }
    }
    ~Hola(){
        delete[] data;
        cout<<"Destructor called."<<endl;
    }
};

int main(){
    Hola A(5);
    A.display();
    Hola B=A;
    B.display();
}
