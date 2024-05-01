#include <iostream>

using namespace std;

class Instrument{
    public:
    void virtual MakeSound(){
        cout<<"Instrument is playing"<<endl;
    }
};

class Accordian : public Instrument{
    public: 
    void MakeSound(){
        cout<<"Accordian is playing"<<endl;
    }
};

int main(){
    Instrument *i1 = new Accordian();
    i1->MakeSound();
}
