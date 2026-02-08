/*Q29. A weather monitoring app records 30-day temperature logs. Implement a solution to store daily 
temperatures in an array and display the minimum temperature for the month.*/
#include<iostream>
using namespace std;
int main(){
    float temp[30];
    float min_temp=0.0;
    for(int i=0;i<30;i++){
        cout<<"enter temp for day "<<i+1<<": ";
        cin>>temp[i];
    }
    for(int i=0;i<30;i++){
        if(temp[i]<min_temp){
            min_temp=temp[i];
        }}
        cout<<"min temp is"<<min_temp;
        return 0;

}
