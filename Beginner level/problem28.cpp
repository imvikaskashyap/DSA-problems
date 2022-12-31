// problem link => https://www.codechef.com/problems/LTIME

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
        if (x >= 1 && x <= 4)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}