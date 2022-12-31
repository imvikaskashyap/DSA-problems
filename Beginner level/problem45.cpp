#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int pass = x + 200;

        if ((y <= pass) && (y >= x))
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

// link => https://www.codechef.com/problems/ADVANCE