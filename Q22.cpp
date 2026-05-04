#include <iostream>
using namespace std;

class pattern
{
public:
    void throwAway()
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i == 0 || i == 7)
                {
                    cout << "*";
                }
                else if ((i != 1 || i != 6) && (j == 0 || j == 7))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
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