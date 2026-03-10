/*Q18. A String-matching tool validates if IDs are palindromes. Implement 
a solution to check whether a given ID is a palindrome. */

#include<iostream>
using namespace std;

int main()
{
    string id;
    int i, flag = 0;

    cout<<"Enter ID: ";
    cin>>id;

    int n = id.length();

    for(i = 0; i < n/2; i++)
    {
        if(id[i] != id[n-i-1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout<<"Palindrome ID";
    else
        cout<<"Not a Palindrome ID";

    return 0;
}