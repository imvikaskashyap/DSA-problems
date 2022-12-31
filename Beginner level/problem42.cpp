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
        int coins = x % 10;
        cout << coins << endl;
    }
    return 0;
}

// link => https://www.codechef.com/problems/MINCOINSREQ