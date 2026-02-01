#include <iostream>
//Compute bonus, net salary, and display results.
using namespace std;

int main() {
    int number_of_employees;
    float bonus, net_salary, basic_salary;

    cout<<"Enter number of employees : ";
    cin>> number_of_employees;

    cout<<"Basic salary of employee : ";
    cin>> basic_salary;

    bonus = basic_salary*0.12; //12% bonus on salary
    net_salary = basic_salary + bonus;
     cout<<"basic salary of a employee : "<<basic_salary<<endl;
     cout<<"bonus employee will get : "<<bonus<<endl;
     cout<<"net salary of the employee : "<<net_salary<<endl;
    

    return 0;
}