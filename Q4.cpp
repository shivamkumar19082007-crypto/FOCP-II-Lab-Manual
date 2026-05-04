#include <iostream>
using namespace std;

int main(){
    int Item_no, Quantity;
    float Unit_price;
    cout << "Enter Item Number: ";
    cin >> Item_no;
    cout << "Enter Quantity: ";
    cin >> Quantity;
    cout << "Enter Unit Price: ";
    cin >> Unit_price;
    float total_price = Unit_price * Quantity, Discount = 0.2*total_price;
    cout << "Price After 20percent discount on Total price is: " << total_price - Discount;
    return 0;
}