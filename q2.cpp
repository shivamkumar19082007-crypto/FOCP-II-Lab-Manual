#include <iostream>
//area of a circle radius by user
using namespace std;
int main(){
    int radius;
    cout<<"enter the radius : ";
    cin>>radius;
    
    float area;
    area = 3.14*radius*radius;
    cout<<"area of the circle is : "<<area<<endl;
    
    return 0;
}