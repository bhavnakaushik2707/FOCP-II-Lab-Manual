/*Q31. A manufacturing QC system checks defect codes divisible by both 3 and 5. 
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5*/
#include<iostream>
using namespace std;

int main(){
    int num[5];
    int count=0,i;
    for( i=0;i<5;i++){
        cout<<"enter num "<<i+1<<": ";
        cin>>num[i];
    }

        for(i=0;i<5;i++){
            if(num[i] % 3==0 && num[i] % 5==0)
            count+=1;

        }
        cout<<"No of values div by 3 & 5 are : "<<count;
        return 0;

}