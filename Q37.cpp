//  A machine learning model multiplies matrices for neural network layers. Implement a solution to multiply two matrices of order m×n and p×q (if valid).
#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q;
    cout << "Enter dimensions of first matrix (m n): ";
    cin >> m >> n;
    cout << "Enter dimensions of second matrix (p q): ";
    cin >> p >> q;
    if (n != p)
    {
        cout << "Matrix multiplication not possible." << endl;
        return 0;
    }
    int A[10][10], B[10][10], C[10][10];
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Result matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}