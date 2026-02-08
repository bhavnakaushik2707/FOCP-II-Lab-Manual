
//Q10. A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a  leap year or not.
/*🧠 Leap Year Logic (Step-by-Step)

First check:
If the year is divisible by 400
→ it IS a leap year

If not, then check:
If the year is divisible by 4 AND not divisible by 100
→ it IS a leap year

Otherwise
→ it is NOT a leap year*/

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year";
    cin>>year;
    if((year%400==0)|| (year%4==0 && year%100!=0))
    {
        cout<<"It is a leap year.";
    }
    else
    {
        cout<<"It is not a leap year";
    }

    return 0;
}