// problem link => https://www.codechef.com/problems/CREDS

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

        int sum = (x * 4) + (y * 2) + (z * 0);

        cout << sum << endl;
    }

    return 0;
}