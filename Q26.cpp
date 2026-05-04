//  A security system generates list of prime keys within given range. Implement a solution to display all 
// prime numbers between two limits. 
#include <iostream>
using namespace std;

int main(){
    int lower, upper;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;
    cout << "Prime numbers between " << lower << " and " << upper << " are: ";
    for (int i = lower; i <= upper; i++) {
        bool isPrime = true;
        if (i < 2) {
            isPrime = false;
        } else {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}