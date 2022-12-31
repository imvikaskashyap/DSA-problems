#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}

// link => https://www.codechef.com/problems/COMPLEXITY?tab=statement