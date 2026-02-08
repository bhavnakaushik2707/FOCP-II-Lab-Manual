/*Q28. A data processing system classifies even and odd inputs separately. Implement a solution to 
store 5 elements in an array, compute sum of all even and sum of all odd numbers. */
#include<iostream>
using namespace std;
int main(){
    int num[5];
    for(int i=0;i<5;i++){
        cout<<"enter num "<<i+1<<": ";
        cin>>num[i];
    }
    int osum=0,esum=0;
    for(int i=0;i<5;i++){
        if(num[i]%2==0){
            esum=esum+num[i];
        }
        else{
            osum=osum+num[i];
        }
        
        
    }
    cout<<"Sum of odd values : "<<osum<<endl<<"eum of even values : "<<esum;
    return 0;
}