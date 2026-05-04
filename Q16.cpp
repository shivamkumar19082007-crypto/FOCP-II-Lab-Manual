// A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a
// number and check whether it is prime.

#include <iostream>
using namespace std;

class PrimeCheck
{
    int num;

public:
    void data()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    void check()
    {
        if (num <= 1)
        {
            cout << num << " is not a prime number.";
            return;
        }
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                cout << num << " is not a prime number.";
                return;
            }
        }
        cout << num << " is a prime number.";
    }
};
int main()
{
    PrimeCheck o1;
    o1.data();
    o1.check();
    return 0;
}