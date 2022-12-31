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
        if (x < y)
        {
            cout << "First" << endl;
        }
        else if (x == y)
        {
            cout << "Any" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}

// link => https://www.codechef.com/problems/CABS