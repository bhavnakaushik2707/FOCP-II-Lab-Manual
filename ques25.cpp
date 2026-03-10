/*Q25. A security system generates list of prime keys within given range. Implement a solution to display all 
prime numbers between two limits. 
A web-based application enforces strong password policies during user registration to improve account security. 
The system requires that every password must satisfy the following conditions: 
• Contain at least one uppercase letter (A–Z) 
• Contain at least one lowercase letter (a–z) 
• Contain at least one digit (0–9) 
• Contain at least one special character from the set 
@ # $ % ! & * 
You are required to develop the code so that the password validation logic can be implemented in the application.*/



#include<iostream>
using namespace std;

int main()
{
    int a,b,i,j,flag;

    cout<<"Enter lower limit: ";
    cin>>a;

    cout<<"Enter upper limit: ";
    cin>>b;

    for(i=a;i<=b;i++)
    {
        flag=0;

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(i>1 && flag==0)
        cout<<i<<" ";
    }

    return 0;
}