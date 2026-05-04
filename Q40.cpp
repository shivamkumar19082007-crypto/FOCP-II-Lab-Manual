// A content-management system receives user-entered text that may contain inconsistent spacing, mixed
// letter cases, and invalid characters.
// For reliable storage and processing, the system must normalize and validate the input string.
// Develop a C++ program that performs the following tasks on a given input string:
// 1. Remove leading, trailing, and extra spaces between words
// 2. Convert the string to sentence case (first character uppercase, remaining lowercase)
// 3. Count and display:
//  Total number of words
//  Total number of digits
//  Total number of special characters
// 4. Validate that the final string contains only alphabets, digits, and spaces
// Display appropriate messages based on the validation result.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int wordCount = 0, digitCount = 0, specialCharCount = 0;
    string input, normalized;
    cout << "Enter a string: ";
    getline(cin, input);
    bool inWord = false;
    for (char c : input)
    {
        if (isalpha(c))
        {
            normalized += tolower(c);
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
        else if (isdigit(c))
        {
            normalized += c;
            digitCount++;
            inWord = false;
        }
        else if (isspace(c))
        {
            if (inWord)
            {
                normalized += ' ';
                inWord = false;
            }
        }
        else
        {
            specialCharCount++;
        }
    }
    cout << "Normalized string: " << normalized << endl;
    cout << "Total number of words: " << wordCount << endl;
    cout << "Total number of digits: " << digitCount << endl;
    cout << "Total number of special characters: " << specialCharCount << endl;
    bool isValid = true;
    for (char c : normalized)
    {
        if (!isalpha(c) && !isdigit(c) && !isspace(c))
        {
            isValid = false;
            break;
        }
    }
    if (isValid)
    {
        cout << "The final string is valid." << endl;
    }
    else
    {
        cout << "The final string contains invalid characters." << endl;
    }
    return 0;
}