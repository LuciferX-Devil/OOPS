/*Write a Program to read an odd number N. and overload the Prefix ++ increment operator
and Prefix -- decrement operator. [Module 7, Easy]
Note: Let us assume that N=11 then ++N should print N=13 and --N should print N=9 */

#include <iostream>

using namespace std;

class MeOverloaded{
    public:
    int N;
    MeOverloaded(){}
    MeOverloaded(int N):N(N){}

    void operator ++(){
        N+=2;
    }

    void operator --(){
        N-=2;
    }
};

int main(){
    int N;string input;
    cin>>N>>input;
    if(N/2==0 || input!= "++" && input!="--"){cout<<"Invalid inputs >:("<<endl;}
    else{
        MeOverloaded o(N);
        if(input=="++"){++o;}else if(input=="--"){--o;}
        cout<<o.N;
    }
    return 0;
}
