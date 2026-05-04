// A jewelry design tool generates hollow diamond outlines for patterns. Implement a solution to display a hollow diamond pattern of *.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 1)
        {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 1)
        {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}