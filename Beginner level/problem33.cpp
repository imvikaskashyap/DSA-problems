#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n, x, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> k;
        if (k >= (n * x))
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

// link => https://www.codechef.com/problems/PARTY2