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
        if (x <= 15)
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

// link => https://www.codechef.com/problems/BATTERYLOW