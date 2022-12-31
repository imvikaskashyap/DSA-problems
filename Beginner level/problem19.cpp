// problem link => https://www.codechef.com/problems/CHESSTIME

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
        int time = x * 60 / 20;
        cout << time << endl;
    }
    return 0;
}