#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        int total = (z - y) / x;
        cout << total << endl;
    }
    return 0;
}

// link => https://www.codechef.com/problems/MANGOES