// A data processing system classifies even and odd inputs separately. Implement a solution to store 5 elements in an array, compute sum of all even and sum of all odd numbers.
#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int sumEven = 0;
    int sumOdd = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0)
        {
            sumEven += numbers[i];
        }
        else
        {
            sumOdd += numbers[i];
        }
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    return 0;
}