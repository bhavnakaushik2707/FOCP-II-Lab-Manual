/*Q32. A stock market app tracks first and second highest stock values. Implement a solution to find the largest 
and second largest number in an array of size 5. */
#include<iostream>
using namespace std;
int main(){
    int num[5];
    int i;
    int largest=0,second_largest=0;
        for( i=0;i<5;i++){
        cout<<"enter num "<<i+1<<": ";
        cin>>num[i];
    }

        for(i=0;i<5;i++){
            if(num[i]>largest)
            largest=num[i];
        }
        for(i=0;i<5;i++){
            if(num[i]>second_largest && num[i]<largest)
            second_largest=num[i];
        }
        cout<<"largest is "<<largest<<"second largest is :"<<second_largest;
        return 0;

}

