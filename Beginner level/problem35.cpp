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
        int x;
        if (a > b)
        {
            x = 7 - a;
        }
        else
        {
            x = 7 - b;
        }
        cout << x << endl;
    }
    return 0;
}

// link => https://www.codechef.com/problems/AIRHOCKEY