/*Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total 
expenses and apply a discount accordingly.*/
#include<iostream>
using namespace std;
int main(){
    int no_item;
    float price ,total,discount,total_discount;


    cout<<"Enter no of items : "<<endl;
    cin>>no_item;
    cout<<"Enter Price : "<<endl;
    cin>>price;

    total=price*no_item;

    if(no_item>1000){
        discount=total*0.1;
        total_discount=total-discount;
        cout<<"total is"<<total_discount;
    }
    else{
        cout<<"Total is"<<total;
    }

}