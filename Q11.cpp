#include <iostream>
using namespace std;

class discount
{
    int items;
    float price, total;

public:
    void data()
    {
        cout << "Enter the number of items: ";
        cin >> items;
        cout << "Enter the price per item: ";
        cin >> price;
    }
    void calc()
    {
        total = items * price;
        if (items > 1000)
        {
            float discount = total * 0.10;
            total -= discount;
        }
    }
    void result()
    {
        cout << "Total expenses: " << total;
    }
};
int main()
{
    discount d1;
    d1.data();
    d1.calc();
    d1.result();

    return 0;
}