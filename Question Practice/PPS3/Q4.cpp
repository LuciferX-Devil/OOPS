/*An education centre runs several batches for various courses in a day. Due to the limited
number of resources, they want to finalize the minimum number of class rooms needed to
run the classes so that no batch of students wait.
Given the start time and end time of all batches, design a system that finds the minimum
number of class rooms required for the education centre. Your system should overload the
appropriate operators (wherever if possible).
Problem Input: List of start time and end time
Problem Output: Minimum number of class rooms required [Module 7, Hard]*/

#include <iostream>

using namespace std;

int clash = 0;

class Education{
    public:
        void Checker(int starttime1,int endtime1, int starttime2,int endtime2){
            bool TruorNot=0;
            for(int i = starttime1;i<=endtime1;i++){
                for(int j = starttime2;j<endtime2;j++){
                    if(i==j){TruorNot=1;}
                }
            }
            if(TruorNot==1){clash+=2;}
        }
        void operator --(){
            if(clash==6){clash/=2;}
        }
};

int main(){
    int starttime1,endtime1,starttime2,endtime2,starttime3,endtime3;
    cin>>starttime1>>endtime1>>starttime2>>endtime2>>starttime3>>endtime3;
    
    Education poggers;

    poggers.Checker(starttime1,endtime1,starttime2,endtime2);
    poggers.Checker(starttime2,endtime2,starttime3,endtime3);
    poggers.Checker(starttime1,endtime1,starttime3,endtime3);

    --poggers;

    cout<<clash;

    return 0;
}
