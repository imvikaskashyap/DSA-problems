// problem link => https://www.codechef.com/problems/TASTEDEC

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

        x = 2 * x;
        y = 5 * y;

        if (x > y)
        {
            cout << "Chocolate" << endl;
        }
        else if (y > x)
        {
            cout << "Candy" << endl;
        }
        else
        {
            cout << "either" << endl;
        }
    }

    return 0;
}