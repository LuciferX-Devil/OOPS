#include <iostream>

using namespace std;

class Point{
    public:
    int x,y,z;
};

int main(){
    Point A[3];
    int x,y,z;
    for(int i=0;i<3;i++){
    cout<<"Enter x,y,z coords of point";
    cin>>A[i].x>>A[i].y>>A[i].z;
    }
    Point temp[2];
    temp[0].x=abs(A[2].x-A[0].x);temp[0].y=abs(A[2].y-A[0].y);temp[0].z=abs(A[2].z-A[0].z);
    temp[1].x=abs(A[1].x-A[0].x);temp[1].y=abs(A[1].y-A[0].y);temp[1].z=abs(A[1].z-A[0].z);
    bool paracheck=false;
    int j=1;
    while(j != 0){
        j++;
    if(temp[0].x/j==temp[1].x and temp[0].y/j==temp[1].y and temp[0].z/j==temp[1].z){
        paracheck = true;
        break;
    }
    }
    bool collicheck=false;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(A[i].x==A[j].x and A[i].y==A[j].y and A[i].z==A[j].z){
                collicheck=true;
            }
        }
    }
    if(collicheck == true or paracheck == true){cout<<"Points are collinear.";}
    else{cout<<"Not collinear.";}
    return 0;
}
