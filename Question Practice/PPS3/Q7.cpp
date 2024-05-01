/*Create an abstract class MathSymbol may provide a pure virtual function doOperation(),
and create two more classes Plus and Minus implement doOperation() to provide concrete
implementations of addition in Plus class and subtraction in Minus class.
 [Module 7, Moderate]*/

#include <iostream>

using namespace std;

class MathSymbol{
    public:
    int virtual doOperation(int x,int y) = 0;
};

class Plus : public MathSymbol{
    public:
    int doOperation(int x,int y){
        return x+y;
    }
};

class Minus : public MathSymbol{
    public:
    int doOperation(int x,int y){
        return x-y;
    }
};

int main(){
    MathSymbol *m1 = new Plus();
    cout<<m1->doOperation(10,5)<<endl;
    MathSymbol *m2 = new Minus();
    cout<<m2->doOperation(10,5);
    delete m1,m2;
    return 0;
}
