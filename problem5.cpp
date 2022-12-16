// problem link =>  https://www.codechef.com/problems/PRIZEPOOL

#include <iostream>

using namespace std;

int main()
{
    int t, x;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x;
        if (x % 2 == 0)
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