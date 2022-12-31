#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        int totalRs = 5 * x + 10 * y;

        int totalChoco = totalRs / z;
        cout << totalChoco << endl;
    }
    return 0;
}

// link=> https://www.codechef.com/problems/CCHOCOLATES