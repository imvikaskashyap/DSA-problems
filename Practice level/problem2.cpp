#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n, m, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if (n <= (m - k))
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

// link => https://www.codechef.com/problems/COURSEREG