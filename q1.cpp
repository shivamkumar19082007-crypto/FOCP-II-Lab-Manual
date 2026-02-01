#include <iostream>
//average of marks of a student in 5 subjects input by user
using namespace std;
int main(){
    int marks1, marks2, marks3, marks4, marks5;
    cout <<"enter marks1 : \n";
    cin >>marks1;
    cout <<"enter marks2 : \n";
    cin>>marks2;
    cout <<"enter marks3 : \n";
    cin>>marks3;
    cout <<"enter marks4 : \n";
    cin>>marks4;
    cout <<"enter marks5 : \n"<<marks5;
    cin>>marks5;
    float avg=(marks1+marks2+marks3+marks4+marks5)/5;
    cout<<"avg of the marks obtained by the student : "<<avg<<endl;
    return 0;
}