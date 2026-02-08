/*Q27. A supermarket software maintains item price lists. Implement a solution to store the prices of 10 
items in an array and display the maximum price.*/

#include<iostream>
using namespace std;
int main(){
    float max;
    float price[10];

    for(int i=0;i<10;i++){
        cout<<"enter price for item"<<i+1<<": ";
        cin>>price[i];
    }
    max=0.0;
    for(int i=0;i<10;i++){
        if(price[i]>max){
            max=price[i];
        }
        
    }
    cout<<"Max Price is : "<<max;
    return 0;
}