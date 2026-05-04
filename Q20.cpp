#include <iostream>
using namespace std;

class pattern
{
    // int num;
public:
    void throwAway()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main()
{
    pattern P1;
    P1.throwAway();
    return 0;
}