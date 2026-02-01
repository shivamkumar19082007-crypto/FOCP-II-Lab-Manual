#include <iostream>
//Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.
using namespace std;
int main(){
    int item_no, quantity;
    float unit_price, amount, discount, net_amount;
    cout<<"enter item number";
    cin>>item_no;
    
    cout<<"enter quantity";
    cin>>quantity;
    
    cout<<"enter unit price";
    cin>>unit_price;

    amount = quantity*unit_price;
    discount = amount*0.20;
    net_amount = amount-discount;

    cout<<"net payable amount after 20% discount : "<<net_amount<<endl;
    return 0;
}