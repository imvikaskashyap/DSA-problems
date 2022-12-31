// problem link => https://www.codechef.com/problems/MAXDIFFMIN

#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t, a, b, c;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;

        int max, min;

        if ((a > b && a > c) && (b < a && b < c))
        {
            max = a;
            min = b;
        }
        else if ((b > a && b > c) && (c < a && c < b))
        {
            max = b;
            min = c;
        }
        else
        {
            max = c;
            min = a;
        }

        int diff = max - min;
        cout << diff << endl;
    }

    return 0;
}