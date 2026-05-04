// Q5. A student wants to swap the values of two variables for practising coding basics. Implement a solution to swap two numbers using different techniques. 
#include <iostream>
using namespace std;

int main(){
    int num1, num2, temp;
    cout << "Enter Num 1 and Num 2: ";
    cin >>num1>>num2;
    cout<< "Before Swap\nNum1 = " << num1<<" \nNum2 = "<<num2;
    // temp = num1; 
    // num1 = num2;
    // num2 = temp;
    // cout<< "\nAfter Swap\nNum1 = " << num1<<" \nNum2 = "<<num2;
    // swap(num1, num2);
    num1 = num1*num2;
    num2 = num1 /num2;
    num1 = num1 / num2;
    cout<< "\nAfter Swap\nNum1 = " << num1<<" \nNum2 = "<<num2;
    return 0;
}