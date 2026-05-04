#include <iostream>
using namespace std;

class pattern
{
    int num;

public:
    void getnum()
    {
        cout << "Enter Num: ";
        cin >> num;
    }
    void throwAway()
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = num; j >= i+1; j--)
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
    P1.getnum();
    P1.throwAway();
    return 0;
}