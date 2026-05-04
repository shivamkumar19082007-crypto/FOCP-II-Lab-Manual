// A data analytics tool finds the maximum sales figure from multiple entries.
// Implement a solution to accept ‘n’ numbers and display the largest.
#include <iostream>
using namespace std;

class MaxSales
{
    int n;
    float *sales;

public:
    void data()
    {
        cout << "Enter the number of sales entries: ";
        cin >> n;
        sales = new float[n];
        cout << "Enter the sales figures: ";
        for (int i = 0; i < n; i++)
        {
            cin >> sales[i];
        }
    }
    void findMax()
    {
        float max = sales[0];
        for (int i = 1; i < n; i++)
        {
            if (sales[i] > max)
            {
                max = sales[i];
            }
        }
        cout << "The maximum sales figure is: " << max;
    }
};
int main()
{
    MaxSales ms;
    ms.data();
    ms.findMax();
    return 0;
}