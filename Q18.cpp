// A String-matching tool validates if IDs are palindromes. Implement a solution to check whether a given ID is a palindrome. 
#include <iostream>
using namespace std;

int main(){
    int n, temp, rem, rev = 0;
    cout<<"Enter an ID: "<<endl;
    cin>>n;
    temp = n;
    while(temp != 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if(rev == n){
        cout<<n<<" is a palindrome."<<endl;
    }
    else{
        cout<<n<<" is not a palindrome."<<endl;
    }
    return 0;
}