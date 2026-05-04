// A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
// check the triangle type based on its sides. 
#include <iostream>
using namespace std;

class triangle{
    int s1, s2, s3;
    public:
    void data(){
        cout << "Enter the sides of the triangle: ";
        cin >> s1 >> s2 >> s3;
    }
    void check(){
        if (s1 == s2 && s2 == s3){
            cout << "The triangle is equilateral.";
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3){
            cout << "The triangle is isosceles.";
        }
        else{
            cout << "The triangle is scalene.";
        }
    }
};

int main(){
    triangle t1;
    t1.data();
    t1.check();
    return 0;
}