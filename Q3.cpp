//  A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to convert Fahrenheit temperature into Centigrade or vice versa.
#include <iostream>
using namespace std;

int main()
{
    float C = 0, F = 0;
    int choice = 0;
    cout << "Enter if you want \n1. C to F\n2. F to C\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter Temp in Celsius: ";
        cin >> C;
        cout << "Temp in Fahrenheit: " << C * (9.0 / 5.0) + 32;
    }
    else if (choice == 2)
    {
        cout << "Enter Temp in Fahrenheit: ";
        cin >> C;
        cout << "Temp in Celsius: " << (F - 32) * (5.0 / 9.0);
    }
    else
    {
        cout << "!!!!! INVALID OPTION SELECTED !!!!!!";
    }

    return 0;
}