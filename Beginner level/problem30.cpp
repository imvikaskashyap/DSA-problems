

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, x, y;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        if (x < y * 2)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}

// link => https://www.codechef.com/problems/INVESTMENT
