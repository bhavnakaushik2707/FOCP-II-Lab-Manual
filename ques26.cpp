/*Q26. The school report card system stores subject marks for each student. 
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.*/

#include<iostream>
using namespace std;
int main(){
    float marks[5];
    int total = 0;
    float percentage;

    for(int i=0;i<5;i++){
        cout<<"enter marks for subject"<<i+1<<": ";
        cin>>marks[i];
        total += marks[i];
    }
    percentage = total / 5.0;

    cout << "Total Marks = " << total<< endl;
    cout << "\nPercentage = " << percentage << "%"<< endl;



    return 0;


}