/*Q17. A learning application analyzes numbers for mathematical properties. 
Design a solution to check whether a given number is a Perfect number or an Armstrong number.*/


#include<iostream>
using namespace std;
int main()
{
    int num, i, sum = 0, temp, rem, arm = 0;

    cout<<"Enter a number: ";
    cin>>num;
    for(i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
        cout<<"Number is a Perfect Number"<<endl;
    else
        cout<<"Number is not a Perfect Number"<<endl;
        
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        arm = arm + (rem*rem*rem);
        temp = temp / 10;
    }

    if(arm == num)
        cout<<"Number is an Armstrong Number"<<endl;
    else
        cout<<"Number is not an Armstrong Number"<<endl;

    return 0;
}