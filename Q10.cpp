#include <iostream>
using namespace std;

class leapYr{
    int yr;
    public:
    void data(){
        cout << "Enter the year: ";
        cin >> yr;
    }
    void check(){
        if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0)){
            cout << yr << " is a leap year.";
        }
        else{
            cout << yr << " isn't a leap year.";
        }
    }
};

int main(){
    leapYr o1;
    o1.data();
    o1.check();
    return 0;
}