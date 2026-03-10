/*Q15. A data analytics tool finds the maximum sales figure from multiple entries. 
Implement a solution to accept ‘n’ numbers and display the largest.*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    float sales, max;

    cout<<"Enter number of sales entries: ";
    cin>>n;
    cout<<"Enter sales value: ";
    cin>>max;
    for(int i=2; i<=n; i++)
    {
        cout<<"Enter sales value: ";
        cin>>sales;

        if(sales > max)
        {
            max = sales;
        }
    }

    cout<<"Maximum sale figure ="<<max;

    
    
    return 0;
}