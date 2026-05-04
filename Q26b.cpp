// A web-based application enforces strong password policies during user registration to improve account security.
// The system requires that every password must satisfy the following conditions:
// • Contain at least one uppercase letter (A–Z)
// • Contain at least one lowercase letter (a–z)
// • Contain at least one digit (0–9)
// • Contain at least one special character from the set
// @ # $ % ! & *
// You are required to develop the code so that the password validation logic can be implemented in the application.
#include <iostream>
using namespace std;

int main()
{
    string password;
    cout << "Enter a password: ";
    cin >> password;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "@#$%!&*";

    for (char c : password)
    {
        if (isupper(c))
        {
            hasUpper = true;
        }
        if (islower(c))
        {
            hasLower = true;
        }
        if (isdigit(c))
        {
            hasDigit = true;
        }
        if (specialChars.find(c) != string::npos)
        {
            hasSpecial = true;
        }
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
    {
        cout << "Password is valid." << endl;
    }
    else
    {
        cout << "Password is invalid." << endl;
    }
    return 0;
}