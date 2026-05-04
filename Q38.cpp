//  A registration system rejects usernames that contain spaces or special characters. Write a C++ program to validate whether a given string can be accepted as a username. 
#include <iostream>
#include <string>
using namespace std;

int main(){
    int wordCount = 0, digitCount = 0, specialCharCount = 0;
    string input, normalized;
    cout << "Enter a string: ";
    getline(cin, input);
    bool inWord = false;
    for (char c : input) {
        if (isalpha(c)) {
            normalized += tolower(c);
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else if (isdigit(c)) {
            normalized += c;
            digitCount++;
            inWord = false;
        } else if (isspace(c)) {
            if (inWord) {
                normalized += ' ';
                inWord = false;
            }
        } else {
            specialCharCount++;
        }
    }
    cout << "Normalized string: " << normalized << endl;
    cout << "Total number of words: " << wordCount << endl;
    cout << "Total number of digits: " << digitCount << endl;
    cout << "Total number of special characters: " << specialCharCount << endl;
    bool isValid = true;
    for (char c : normalized) {
        if (!isalpha(c) && !isdigit(c) && !isspace(c)) {
            isValid = false;
            break;
        }
    }
    if (isValid) {
        cout << "The final string is valid." << endl;
    } else {
        cout << "The final string contains invalid characters." << endl;
    }

    return 0;
}