#include <iostream>
using namespace std;

class Billboard{
    private:
    string title;

    public:
    void setTitle(string x){
        title=x;
    }
    string getTitle(){
        return title;
    }
};


int main(){

    Billboard bill;
    bill.setTitle("Top 5 songs of 2024");
    cout<<bill.getTitle();

    return 0;
}
