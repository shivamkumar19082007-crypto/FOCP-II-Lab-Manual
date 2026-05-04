//  A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
// solution to classify the symbol.
#include <iostream>
using namespace std;

class alphabet
{
    char character;

public:
    void data()
    {
        cout << "Enter a character: ";
        cin >> character;
    }
    void check()
    {
        if (int(character) == 97 || int(character) == 101 || int(character) == 105 || int(character) == 111 || int(character) == 117 || int(character) == 65 || int(character) == 69 || int(character) == 73 || int(character) == 79 || int(character) == 85)
        {
            cout << character << " is a vowel." << endl;
        }
        else
        {
            cout << character << " is a consonant." << endl;
        }
    }
};

int main()
{
    alphabet o1;
    o1.data();
    o1.check();
    return 0;
}