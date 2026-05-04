//  In software applications such as data analytics and probability systems, combinatorial values are frequently
// required. To ensure efficiency, developers avoid factorial-based solutions and use iterative logic with loops.
// As a Junior Software Developer, design a C++ program to generate Pascal’s Triangle for a given number of
// rows.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << val << " ";
            val = val * (i - k) / (k + 1);
        }
        cout << endl;
    }
    return 0;
}