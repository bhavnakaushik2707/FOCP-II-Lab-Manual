//Q7. A game compares three players' scores to find who is ahead. Implement a solution to accept three scores 
//and identify the winner..
#include<iostream>
using namespace std;
int main(){
    int p1,p2,p3;
    cout<<"enter score for p1"<<endl;
    cin>>p1;
    cout<<"enter score for p2"<<endl;
    cin>>p2;
    cout<<"enter score for p3"<<endl;
    cin>>p3;
    if (p1>p2 && p1>p3) {
        cout << "p1 is the winner";
    }
    else if (p2>p1 && p2>p3) {
        cout << "p2 is the winner";
    }
    else {
        cout << "p3 is the winner";
    }
    return 0;
}