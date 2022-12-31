#include <iostream>
using namespace std;
int main()
{
    int T, X, H;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> X >> H;
        if (X >= H)
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
