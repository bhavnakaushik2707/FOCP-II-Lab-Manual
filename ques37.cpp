#include<iostream>
using namespace std;

int main()
{
    string user;
    bool valid=true;

    cout<<"Enter username: ";
    cin>>user;

    for(int i=0;i<user.length();i++)
    {
        if(!((user[i]>='A'&&user[i]<='Z') ||
             (user[i]>='a'&&user[i]<='z') ||
             (user[i]>='0'&&user[i]<='9')))
        {
            valid=false;
            break;
        }
    }

    if(valid)
        cout<<"Username accepted";
    else
        cout<<"Invalid username";

    return 0;
}