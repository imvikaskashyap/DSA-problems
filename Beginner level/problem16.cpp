// problem link => https://www.codechef.com/problems/RAINFALL1

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
        if (x < 3)
        {
            cout << "light" << endl;
        }
        else if (x >= 7)
        {
            cout << "heavy" << endl;
        }
        else
        {
            cout << "Moderate" << endl;
        }
    }
    return 0;
}