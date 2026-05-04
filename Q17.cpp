// A learning application analyzes numbers for mathematical properties. Design a solution to check whether a given number is a Perfect number or an Armstrong number.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << n << " is a Perfect number." << endl;
    }
    else
    {
        cout << n << " is not a Perfect number." << endl;
    }

    int temp = n, arm = 0, rem;
    while (temp != 0)
    {
        rem = temp % 10;
        arm += rem * rem * rem;
        temp /= 10;
    }
    if (arm == n)
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}