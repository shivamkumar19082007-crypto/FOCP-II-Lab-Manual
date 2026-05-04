// Q24. A typing practice app displays the alphabets in pyramid form. Implement a solution to display:
// A
// AB
// ABC
// ABCD
// ABCDE
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
    return 0;
}