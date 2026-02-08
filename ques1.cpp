//Q1. A teacher wants to calculate the average marks of three students to determine the class performance. 
//Implement a solution to accept three numbers and compute their average.    
#include<iostream>
using namespace std;
int main()
{
int rno;
    cout << "enter rno: ";
    cin >> rno;

    int mks1, mks2, mks3;
    cout << "enter 3 marks: ";
    cin >> mks1 >> mks2 >> mks3;

    int total = mks1 + mks2 + mks3;
    float avg = total / 3.0;

    cout << "marks 1: " << mks1 << endl;
    cout << "marks 2: " << mks2 << endl;
    cout << "marks 3: " << mks3 << endl;
    cout << "total: " << total << endl;
    cout << "average: " << avg << endl;
    return 0;


}