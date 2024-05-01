/*Consider creating a program to simulate various vehicle types. In addition to making a
basic class named Vehicle that has universally applicable properties and methods, you also
want to make distinct classes for various kinds of vehicles, such as cars and airplanes. The
distinct traits and procedures that distinguish each vehicle class from other sorts of vehicles
are their own. Nonetheless, several vehicle types might have things in common and work in
similar ways. A plane, for instance, also has an altitude, while both a car and a plane have a
maximum speed and a present speed. You can create a Vehicle class that contains general
properties and methods, and then create specific vehicle classes that inherit from Vehicle as
well as from each other. Create a C++ code snippet for the above scenario that
demonstrates inheritance. (MODULE 6 - HARD) */

#include <iostream>

using namespace std;

class Vehicle{
    public:
    int max_speed,present_speed;
    string color; 
    Vehicle(){}
    Vehicle(int max_speed,int present_speed,string color):max_speed(max_speed),present_speed(present_speed),color(color){}
};

class Car:public Vehicle{
    public:
    string light_color,cover_type;
    int tire_pressure;
    Car(){}
    Car(int max_speed,int present_speed,string color,string light_color,string cover_type,int tire_pressure):Vehicle(max_speed,present_speed,color),light_color(light_color),cover_type(cover_type),tire_pressure(tire_pressure){}
    void Vdisplay(){
        cout<<max_speed<<endl<<present_speed<<endl<<color<<endl;
    }
};

class Airplane : public Vehicle{
    public:
    int altitude;bool autopilot;
    Airplane(){}
    Airplane(int altitude,bool autopilot):altitude(altitude),autopilot(autopilot){}
    Airplane(int max_speed,int present_speed,string color,int altitude,bool autopilot):Vehicle(max_speed,present_speed,color),altitude(altitude),autopilot(autopilot){}
};

class FlyingCar:public Car,public Airplane{
    public:
    FlyingCar(){}
    FlyingCar(int max_speed,int present_speed,string color,string light_color,string cover_type,int tire_pressure,int altitude,bool autopilot) : Car(max_speed, present_speed, color,light_color,cover_type,tire_pressure), Airplane(altitude,autopilot){}
    void display(){
        Vdisplay();
        cout<<light_color<<endl<<cover_type<<endl<<tire_pressure<<endl<<altitude<<endl<<autopilot<<endl;
    }
};

int main(){
    FlyingCar Spycar(450,415,"white","yellow","leather",40,1500,1);
    Spycar.display();
}
