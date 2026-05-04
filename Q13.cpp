// A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
// solution to calculate the roots of a quadratic equation.
#include <iostream>
using namespace std;

class QuadEq{
    float a, b, c;
    public:
    void data(){
        cout << "Enter the coefficients a, b and c: ";
        cin >> a >> b >> c;
    }
    void roots(){
        float D = b*b - 4*a*c;
        if (D > 0){
            float r1 = (-b + sqrt(D)) / (2*a);
            float r2 = (-b - sqrt(D)) / (2*a);
            cout << "Roots are real and different: " << r1 << " and " << r2;
        }
        else if (D == 0){
            float r = -b / (2*a);
            cout << "Roots are real and same: " << r;
        }
        else{
            cout << "Roots are complex and different.";
        }
    }
};

int main(){
    QuadEq Eq1;
    Eq1.data();
    Eq1.roots();
    return 0;
}