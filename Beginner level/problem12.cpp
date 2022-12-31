// problem link => https://www.codechef.com/problems/SUBSCRIBE

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
        if (x <= 30)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
