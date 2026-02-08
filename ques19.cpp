//Q19. A network security system generates prime numbers in a range for encryption key pools. Implement a 
//solution to find all prime numbers within a given range.


#include<iostream>
using namespace std;
int main(){
    int n,mul=0;
    cout<<"enter n";
    cin>>n;
    for (int i=1;i<=n;i++){
    if (n%i==0)
    mul+=1;
    if (mul > 2)
{
    cout<<i <<',';
}
}


    return 0;
}