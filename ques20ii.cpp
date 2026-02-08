//Q20. A board displays reverse seating layouts for events. Implement a solution to print: 
//5 4 3 2 1 
//5 4 3 2 
//5 4 3 
//5 4 
//5 

#include<iostream>
using namespace std;
int main(){


    for (int j=5;j>0;j--){
    for(int i=5;i>=j;i--){
        cout<<i;
    }
    cout<<endl;
}
    return 0;
}