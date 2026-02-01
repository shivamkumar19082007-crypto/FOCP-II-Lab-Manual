#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;

    cout<<"Before : a = "<<a;
    cout<<" b = "<<b<<endl;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After : a = "<< a;
    cout<<" b = "<<b << endl;
    return 0;
}

