
// problem link =>  https://www.codechef.com/problems/ENSPACE

#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t, n, x, y;
    cin >> t;

    while (t--)
    {
        cin >> n >> x >> y;

        int total = (x * 1) + (y * 2);
        if (total <= n)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}