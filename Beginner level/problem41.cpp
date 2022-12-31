#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n, m, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> x;
        int totalLength = 2 * n + 2 * m;

        int totalCost = totalLength * x;

        cout << totalCost << endl;
    }

    return 0;
}

// link => https://www.codechef.com/problems/CWIREFRAME