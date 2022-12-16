
// problem => https://www.codechef.com/problems/FAIRPASS

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        if (n < k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}