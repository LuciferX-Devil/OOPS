//Operator Overloading using friend functions

#include <iostream>

using namespace std;

class Real{
    private: 
    int real;
    public:
    Real(){}
    Real(int real):real(real){}
    void Getter(){cout<<real;}
    friend Real operator +(Real& r1,Real& r2);
};

class Imag{
    int imag;
    public:
    Imag(){}
    Imag(int imag):imag(imag){}
    Imag ImagAdder(Imag& a,Imag &b){
        Imag temp;
        temp.imag = a.imag + b.imag;
        return temp;
    }
    void Getter(){cout<<imag;}
};

Real operator +(Real& r1,Real& r2){
    Real temp; 
    temp.real= r1.real+r2.real;
    return temp;
}

int main(){
    Real r1(5);Real r2(6);Real r; Imag i1(3);Imag i2(4);Imag i;
    r = operator +(r1,r2);
    i = i1.ImagAdder(i1,i2);
    r.Getter();cout<<"+";i.Getter();cout<<"i";

    return 0;
}
