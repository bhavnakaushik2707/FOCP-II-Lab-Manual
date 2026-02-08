//Q6. An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
//Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
//display results.
#include<iostream>
using namespace std;
int main(){
    int n , i;
    float salary ,bonus_sal ,total_sal ;
    cout << "enter number of employees ";
    cin >> n;
    for(i=1 ; i<=n ; i++){
    salary = 0;
    cout<< "enter salary for" <<i;
    cin>> salary;
    bonus_sal = salary*0.2;
    total_sal = salary+bonus_sal;
    cout<< "total salary after bonus is" <<total_sal <<endl;
    }

    return 0;
}