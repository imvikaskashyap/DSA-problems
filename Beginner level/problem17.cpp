// problem link => https://www.codechef.com/problems/EQUALDIST

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if ((x + y) % 2 == 0)
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