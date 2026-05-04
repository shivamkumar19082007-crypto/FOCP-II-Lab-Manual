
// Wap to calc av marks of student in 5 subjects and only 5 marks are allowed to enter.
#include <iostream>
using namespace std;

int main(){
    int M1=0, M2=0, M3=0, M4=0, M5=0;
    cout << "Enter marks of 5 subjects: ";
    cin >> M1 >> M2 >> M3 >> M4 >> M5;
    cout << (M1 + M2 + M3 + M4 + M5) / 5.0;
    return 0;
}