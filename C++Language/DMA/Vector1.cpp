#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> notArray;
    notArray.push_back(1);
    notArray.push_back(2);
    for (int i=0;i<notArray.size();i++){
    cout<<notArray[i]<<" ";

    }

    return 0;
}
