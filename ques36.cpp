#include<iostream>
using namespace std;

int main()
{
    int m,n,p,q;
    cout<<"Enter rows and columns for first matrix: ";
    cin>>m>>n;

    cout<<"Enter rows and columns for second matrix: ";
    cin>>p>>q;

    if(n!=p)
    {
        cout<<"Multiplication isnot possible";
        return 0;
    }

    int a[m][n], b[p][q], c[m][q];

    cout<<"Enter first matrix:"<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    cout<<"Enter second matrix:"<<endl;
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            cin>>b[i][j];

    for(int i=0;i<m;i++)
        for(int j=0;j<q;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }

    cout<<"Result matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}