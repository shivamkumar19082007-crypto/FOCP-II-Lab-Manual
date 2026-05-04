// A network security system generates prime numbers in a range for encryption key pools. Implement a
// solution to find all prime numbers within a given range.
#include <iostream>
using namespace std;

class primenum
{
    int num;
    int *prime;

public:
    void getnum()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    void check()
    {
        prime = new int[num];
        // cout << "[";
        for (int i = 2; i <= num; i++)
        {
            int counter = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    // prime[counter] = i;
                    counter++;
                    // cout << i << ",";
                }
                
            }
            if (counter == 2)
            {
                cout << i<< endl;
            }
        }
        // cout << "]";
    }
    void result()
    {
        int count = 0;
        int i = 0;
        while (prime[i] == NULL)
        {
            count++;
        }
        cout << "[";
        for (int i = 0; i < count; i++)
        {
            cout << prime[i] << ",";
        }
        cout << "]";
    }
};
int main()
{
    primenum N1;
    N1.getnum();
    N1.check();
    // N1.result();
    return 0;
}