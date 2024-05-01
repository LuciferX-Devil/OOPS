#include <iostream>

using namespace std;

void Jumbler(string input, string temp, int index){
    if(index==input.length()){
        cout<<temp<<endl;
        return;
    }

    for(int i=0;i<input.length();i++){
        bool checker = false;
        for(int j=0;j<index;j++){
            if(temp[j]==input[i]){
                checker=true;
                break;
            }
        }
        if(checker!=true){
            temp[index]=input[i];
            Jumbler(input,temp,index+1);
        }
    }
}

void tempString(string input){
    string temp(input.length(),' ');
    Jumbler(input,temp,0);
}

int main(){
    string input;

    cin>>input;
    tempString(input);

    return 0;
}
