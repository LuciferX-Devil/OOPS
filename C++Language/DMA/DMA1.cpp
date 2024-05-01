 #include <iostream>

using namespace std;

class A{
    private:
    static int count;
    int number;
    public:
    A(){number=0;}
    void setData(){}
    void  setData(int a){number=a;count++;}
    void getData(){cout<<count<<endl;}
};

int A :: count;

int main(){
    A a,b,c;
    cout<<"before reading data: "<<endl;
    a.setData();
    b.setData();
    c.setData();
    a.getData();
    b.getData();
    c.getData();

    cout<<"After reading: "<<endl;
    a.setData(100);
    b.setData(200);
    c.setData(300);
    a.getData();
    b.getData();
    c.getData();
}
