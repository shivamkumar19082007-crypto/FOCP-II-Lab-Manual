#include <iostream>
//Implement a solution to convert Fahrenheit temperature into Centigrade or vice versa.
using namespace std;
int main(){
    float celsius, fehrenheit;
    cout<<"enter temprature in celsius : ";
    cin>>celsius;
    fehrenheit = (celsius*9/5)+32;
    cout<<"temprature in fehrenheit : "<<fehrenheit<<endl;

    return 0;
}