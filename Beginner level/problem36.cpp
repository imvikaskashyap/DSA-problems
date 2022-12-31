#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x1, y1, x2, y2;

    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        if ((x1 + y1) <= (x2 + y2))
        {
            cout << (x1 + y1) << endl;
        }
        else
        {
            cout << (x2 + y2) << endl;
        }
    }
    return 0;
}

// link => https://www.codechef.com/problems/INTRDSGN