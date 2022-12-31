#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x <= 300)
        {
            cout << (300 * 10) << endl;
        }
        else
        {
            cout << (10 * x) << endl;
        }
    }
    return 0;
}

// link => https://www.codechef.com/problems/CARTRIP