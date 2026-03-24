#include<iostream>
using namespace std;
class Smartlight 
{
    string brand;
    int brightness;
    bool isOn;
    public:
    Smartlight()
    {
    
        brand="unknown";
        brightness=50;
        isOn=false;
    }
    
Smartlight(string b, int br, bool status){
        brand=b;
        brightness=br;
        isOn=status;
    }
    void turnOn() {
        isOn=true;
        cout<<brand<<"light turned on"<<endl;
    }
    void turnOff() {
        isOn=false;
        cout<<brand<<"light turned off"<<endl;
    }
    void increasebrightness() {
        if (brightness+10<100)
            brightness+=10;
        else
            brightness = 100;
        
        cout <<"\n brightness increased to"<<brightness<<endl;
    }
    void decreasebrightness() {
        if (brightness-10 > 0) 
            brightness-=10;
    else
            brightness=0;
        
        cout<<"\n brightness decrease to" << brightness << endl;
    }
    void displaystatus() {
        cout<<"\n brand"<<brand;
        cout<<"\n brightness"<<brightness;
        
    if(isOn)
    cout<<"\n Status on";
    else
    cout<<"\n Status off";
    }
    ~Smartlight(){cout<<"\n object destroyed";}
};

int main() {
    Smartlight light1("xyz",87,true);
    light1.displaystatus();
    {cout<<"\n inside block";
        Smartlight s2;
        cout<<"\n leaving block";
    }
    light1.turnOn();
    light1.increasebrightness();
    light1.displaystatus();
    return 0;


}