/*Q13. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
solution to calculate the roots of a quadratic equation. 
*/
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, det;

    cout<<"Enter a, b, c: ";
    cin>> a >> b >> c;

    det=b*b - 4*a*c;

    if(det> 0)
        cout<< "Roots are real and different";
    else if(det== 0)
        cout<< "Roots are real and equal";
    else
        cout << "Roots are imaginary";

    return 0;
}