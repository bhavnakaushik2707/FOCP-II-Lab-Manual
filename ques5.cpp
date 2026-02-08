//Q5. A student wants to swap the values of two variables for practising coding basics. 
//Implement a solution to swap two numbers using different techniques
// third variable
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"ennter a ";
cin>>a;
cout<<"ennter b ";
cin>>b;

c=a;
a=b;
b=c;
cout<<"value of a "<<a<<endl<<"value of b is "<<b<<endl;
//without third variable
int d , e;
cout<<"enter d"<<endl;
cin>>d;
cout<<"enter e"<<endl;
cin>>e;

d=d+e;
e=d-e;
d=d-e;
cout<<"value of d"<<d<<endl<<"value of e is"<<e<<endl;
//bitwise XOR
    int f, g;
    cout << "Enter two numbers: "<<endl;
    cin>>f>>g;

    cout << "Before swapping f = " <<f << ", g = " <<g << endl;

    // Swapping using XOR
    f = f ^ g;
    g = f ^ g;
    f = f ^ g;

    cout << "After swapping: f = " << f << ", g= " <<g << endl;

    return 0;
}
