#include <iostream>

using namespace std;

class Instrument{      // Abstract class
    public:
    void virtual MakeSound() = 0;     //Pure Virtual Function
};

class Accordian : public Instrument{

    void MakeSound(){
        cout<<"Accordian is playing."<<endl;
    }

};

class Piano :public Instrument{
    public:
    void MakeSound(){
        cout<<"Piano is playing."<<endl;
    }
};

int main(){
    Instrument *i1 = new Piano();
    Instrument *i2 = new Accordian();
    i1->MakeSound();
    i2->MakeSound();
    return 0;
}
