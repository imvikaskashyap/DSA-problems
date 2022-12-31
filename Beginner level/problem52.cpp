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
        if (x > 20)
        {
            cout << "hot" << endl;
        }
        else
        {
            cout << "cold" << endl;
        }
    }
    return 0;
}

// link => https://www.codechef.com/problems/HOTCOLD