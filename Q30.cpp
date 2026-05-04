//  A weather monitoring app records 30-day temperature logs. Implement a solution to store daily temperatures in an array and display the minimum temperature for the month.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double temperatures[30] = {27, 45, 53, 40, 40, 80, 62, 33, 29, 16, 9, 29, 52, 58, 58, 92, 45, 56, 43, 28, 73, 98, 4, 26, 59, 82, 89, 84, 60, 72};
    // cout << "Enter the temperatures for 30 days:" << endl;
    // for (int i = 0; i < 30; i++)
    // {
    //     cout << "Day " << i + 1 << ": ";
    //     cin >> temperatures[i];
    // }
    sort(temperatures, temperatures + 30);
    double minTemp = temperatures[0];
    cout << "The minimum temperature for the month is: " << minTemp << endl;
    return 0;
}