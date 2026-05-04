// The school report card system stores subject marks for each student. Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.
#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int total = 0;

    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double percentage = (double)total / 5;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}