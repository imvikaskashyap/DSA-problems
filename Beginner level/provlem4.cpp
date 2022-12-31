// problem link => https://www.codechef.com/problems/CHEFONDATE

#include <iostream>

using namespace std;

int main()
{
    int t, x, y;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (x >= y)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }

        cout << endl;
    }

    return 0;
}