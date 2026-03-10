/*Q14. Develop a menu-driven calculator program in C++ to perform basic arithmetic operations. 
The program should continue executing based on the user's choice and display the result of each operation. */
#include<iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    while(true)
    {
        cout<<"Menu"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==5)
        {
            cout<<"Program Ended"<<endl;
            break;
        }

        cout<<"Enter two numbers: ";
        cin>>a>>b;

        switch(choice)
        {
            case 1:
                cout<<"Result = "<<a+b<<endl;
                break;

            case 2:
                cout<<"Result = "<<a-b<<endl;
                break;

            case 3:
                cout<<"Result = "<<a*b<<endl;
                break;

            case 4:
                cout<<"Result = "<<a/b<<endl;
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}