// problem link => https://www.codechef.com/problems/WAITTIME

#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t, x, k;

    cin >> t;

    while (t--)
    {
        cin >> k >> x;

        int days = 7 * k;

        cout << (days - x) << endl;
    }

    return 0;
}