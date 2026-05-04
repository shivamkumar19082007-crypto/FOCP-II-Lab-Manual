#include <iostream>
using namespace std;

int main(){
    int choice;
    float num1, num2, result;
    do {
        cout << "Menu: \n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Exit \nEnter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4){
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
        if (choice == 1){
            result = num1 + num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 2){
            result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 3){
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 4){
            if (num2 != 0){
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            else{
                cout << "Error: Division by zero is not allowed." << endl;
            }
        }
        else if (choice == 5){
            cout << "Exiting the program." << endl;
        }
        else{
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}