#include<iostream>
using namespace std;
int main()
{
    float total,total_discount,final_total, unit_price;
    int item_no,qty,n;
    cout<<"enter number of items"<<endl;
    cin>>n;
    total=0;
    for (int i=1; i<=n;i++)
    {
        cout<<"Enter item number: ";
        cin>>item_no;
        cout<<"Enter quantity: ";
        cin>>qty;
        cout<<"Enter unit price: ";
        cin>>unit_price;

        total+=qty*unit_price;
    }

    total_discount =total*0.20;
    final_total =total-total_discount;

    cout << "Total Amount = " << total<<endl;
    cout << "Discount = " << total_discount<<endl;
    cout << "Final Bill Amount= " << final_total<<endl;
    return 0;
}