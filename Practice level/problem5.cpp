#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, w, x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> w >> x >> y >> z;
        int output = ((w + (x * z)) - (y * z));
        cout << output << endl;
    }
    return 0;
}

// link => https://www.codechef.com/problems/BOBBANK