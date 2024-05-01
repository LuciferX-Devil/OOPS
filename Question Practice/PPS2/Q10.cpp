//Write a program that uses an inline function to calculate the area of a circle. The
//function should take in the radius as a parameter and return the area. Test the function
//with the following values:

#include <iostream>

using namespace std;

inline float Circle(float radius){
    return (22*radius*radius)/7;
}
int main(){
    float radius;
    cin>>radius;
    cout<<"Area: "<<Circle(radius);
}
