// problem link => https://www.codechef.com/problems/WATERREQ

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

        int totalWater = x * 2;

        cout << totalWater << endl;
    }
    return 0;
}