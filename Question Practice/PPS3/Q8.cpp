/*We can also overload a unary operator in C++ by using a friend function. Write a C++
program to overloaded ++ operator relative to the Test class using a member function.
 [Module 7, Easy]*/

 #include <iostream>

 using namespace std;

 class Test{
    int variable[3];
    public:
    Test(){}
    Test(int x,int y,int z){
      variable[0]=x;
      variable[1]=y;
      variable[2]=z;
    }
    friend void operator ++(Test& t1);
 };

 void operator ++(Test& t1){
   cout<<"["<<t1.variable[0]<<", "<<t1.variable[1]<<", "<<t1.variable[2]<<"]"<<endl;
    for(int i=0;i<3;i++){
      t1.variable[i]++;
    }
    cout<<"["<<t1.variable[0]<<", "<<t1.variable[1]<<", "<<t1.variable[2]<<"]"<<endl;
    for(int i=0;i<3;i++){
      t1.variable[i]++;
    }
    cout<<"["<<t1.variable[0]<<", "<<t1.variable[1]<<", "<<t1.variable[2]<<"]"<<endl;
 }

 int main(){
    cout<<"Enter 3 numbers: ";
    int x,y,z;
    cin>>x>>y>>z;
    if(x==0 && y==0 && z==0){
      cout<<"All zeroes. "<<endl;
    }
    else{
    Test t1(x,y,z);
    operator ++(t1);
    }
    return 0;
 }
