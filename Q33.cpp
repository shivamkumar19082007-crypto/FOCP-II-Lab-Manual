// A stock market app tracks first and second highest stock values. Implement a solution to find the largest and second largest number in an array of size 5.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int stocks[5];
    int largest = stocks[0];
    int secondLargest = stocks[0];

    cout << "Enter 5 stock values: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> stocks[i];
    }
    sort(stocks, stocks + 5);
    largest = stocks[4];
    secondLargest = stocks[3];

    cout << "Largest stock value: " << largest << endl;
    cout << "Second largest stock value: " << secondLargest << endl;
    return 0;
}