#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, x, y, z;
    cin >> n;
    while (n--)
    {
        cin >> x >> y >> z;
        int total = x - y + z;
        cout << total << endl;
    }
    return 0;
}

// link => https://www.codechef.com/problems/POPULATION