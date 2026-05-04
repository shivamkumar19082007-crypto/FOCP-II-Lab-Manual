// Q7. A game compares three players' scores to find who is ahead. Implement a solution to accept three scores and identify the winner. 
#include <iostream>
using namespace std;

int main(){
    int scores[3], max = 0;
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter Score of player " << i+1 << ": ";
        cin >> scores[i];
    }
    for (int i = 0; i<3; i++)
    {
        if (max <= scores[i])
        {
            max = scores[i];
        }
        else 
        {
            continue;
        }
    }
    cout << "Maximum Score: " << max;
    return 0;
}