/*Create a class string that reads the string and its length. Write a program to overload the
operator < and > to compare two strings. if s1 i< s2 then print "String s1 is smaller than
String s2", if s2< s1 then print "String s2 is smaller than String s1" otherwise print "Both
the Strings s1 and s2 are Equal". (Module 7, Easy)*/

#include <iostream>

using namespace std;

class String{
    public:
    string Statement;
    String(){}
    String(string Statement):Statement(Statement){
        cout<<"Size of string: "<<size(Statement)<<endl;
    }

    void Lengther(){
        int len = size(Statement);
    }

    void operator <(String& s2){
        if(Statement.length()<s2.Statement.length()){
            cout<<"string s1 is smaller than string s2. \n";
        }
        else if(Statement.length()==s2.Statement.length()){
            cout<<"Both strings are equal"<<endl;
        }
    }

    void operator >(String& s2){
        if(Statement.length()>s2.Statement.length()){
            cout<<"string s2 is smaller than string s1. \n";
        }
    }    
};

int main(){
    string string1,string2;
    cin>>string1>>string2;
    String s1(string1);String s2(string2);
    s1>s2;
    s1<s2;

    return 0;
}
