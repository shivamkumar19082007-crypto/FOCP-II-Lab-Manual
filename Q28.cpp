//  A supermarket software maintains item price lists. Implement a solution to store the prices of 10 items in an array and display the maximum price.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double prices[10];
    cout << "Enter the prices of 10 items:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Item " << i + 1 << ": ";
        cin >> prices[i];
    }
    sort(prices, prices + 10);
    cout << "The maximum price is: " << prices[9] << endl;
    return 0;
}