#include <iostream>

using namespace std;

class Test{
    private:
    float data1;
    float data2;

    public:
    void firstFunc(float a){
        data1=a;
        cout<<"Data 1 is "<<data1<<endl;
    }

    float secondFunc(){
        cout<<"Enter number: \n";
        cin>>data2;
        return data2;
    }


};

int main(){

    class Test t1,t2;
    float pog;
    t1.firstFunc(12);
    pog=t2.secondFunc();
    cout<<"You entered "<<pog;

    return 0;
}
