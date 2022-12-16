// problem link => https://www.codechef.com/problems/CNTWRD

#include <iostream>

using namespace std;

int main()
{
    int T, X, Y, P;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y;
        P = (X * 10) + (Y * 90);

        cout << P << endl;
    }

    return 0;
}