/*In your main() , declare two Point objects that are initialized by the default constructor.
Prompt user inputs as shown in the test case and save the user inputs with your
overloaded >> operator. And display the x and y coordinates of the user inputs with your
overloaded << operator as shown in the test case. [Module 7, Moderate]*/

#include <iostream>

using namespace std;

class Point{
    private:
    string x;
    public:
    Point(){
        x="Hello";
    }
    void operator >>(string x){
        this->x=x;
    }
    void operator <<(string x){
        if(x=="0 0"){cout<<"Invalid Coords.";}
        cout<<x<<endl;
    }
};

int main(){
    Point p1;
    string x,y;
    cout<<"Enter x and y coordinates for first point, separated by a space: ";
    getline(cin,x);
    p1.operator>>(x);
    cout<<"Enter x and y coordinates for second point, separated by a space: ";
    getline(cin,y);
    Point p2;
    p2.operator>>(y);
    p1.operator<<(x);p2.operator<<(y);
    return 0;
}
