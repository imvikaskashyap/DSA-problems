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
        if (a < b)
        {
            cout << b - a << endl;
        }
        else
        {
            cout << a - b << endl;
        }
    }
    return 0;
}

// link => https://www.codechef.com/problems/VOLCONTROL