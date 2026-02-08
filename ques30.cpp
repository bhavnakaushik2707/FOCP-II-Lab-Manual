/*Q30. A payroll system maintains employee salary records. Implement a solution to accept salary of 
10 employees in an array, compute total salary and average salary, then display the result.*/

#include<iostream>
using namespace std;
int main(){
    float salary[10];
    float total_sal=0.0,avg_sal=0;

    
    for(int i=0;i<10;i++){
        cout<<"enter salary for employee "<<i+1<<": ";
        cin>>salary[i];
    }

        for(int i=0;i<10;i++){
            total_sal=total_sal+salary[i];
        }
        avg_sal=total_sal/10.0;

        cout<<"Total salary is : "<<total_sal<<"Average sal is "<<avg_sal;

        return 0;


}
