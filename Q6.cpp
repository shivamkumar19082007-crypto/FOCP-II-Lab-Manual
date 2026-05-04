#include <iostream>
using namespace std;

int main()
{
    int NumE, Eid[100];
    int eid = 0;
    float Bas_Sal[100], Bonus[100], Net_Sal[100];
    float sal = 0, bassal = 0;
    cout << "Enter total Num of Employee: ";
    cin >> NumE;
    for (int i = 0; i < NumE; i++)
    {
        cout << "Enter Eid of Employee" << i + 1 << ": ";
        cin >> eid;
        Eid[i] = eid;
        cout << "Enter Basic Salary of Employee" << i + 1 << ": ";
        cin >> sal;
        Bas_Sal[i] = sal;
        Bonus[i] = 0.12 * Bas_Sal[i];
        Net_Sal[i] = Bonus[i] + Bas_Sal[i];
        cout << "\n\n";
    }
    for (int i = 0; i < NumE; i++)
    {
        cout << "For " << Eid[i] << "\n\tBasic Salary : " << Bas_Sal[i] << "\n\tBonus: " << Bonus[i] << "\n\tNet Salary: " << Net_Sal[i];
        cout << "\n\n";
    }
    return 0;
}