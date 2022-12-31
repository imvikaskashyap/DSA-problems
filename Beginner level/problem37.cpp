#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, p, q;
    cin >> t;
    while (t--)
    {
        cin >> x >> p >> q;

        int WithoutTickets = p - q;

        int totalFine = WithoutTickets * x;
        cout << totalFine << endl;
    }
    return 0;
}

// link => https://www.codechef.com/problems/TCKTFINE