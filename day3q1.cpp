//write a programe to add two numbers using classes and objects
#include <iostream>
using namespace std;

int a, b, sum;

void getdata() {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

void display() {
    sum = a + b; 
    cout << "Sum is " << sum << endl;
}

int main() {
    getdata();
    display();
    return 0;
}



















