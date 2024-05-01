#include <iostream>
using namespace std;

class Billboard{

    private:
    string title;

    public:
    void setTitle(string a){
        title=a;
    }

    Billboard(string b){
        setTitle(b);
    }
    string getTitle(){
        return title;
    }
};

int main(){
    Billboard bill("Hello World");
    cout<<bill.getTitle();

    return 0;
}
