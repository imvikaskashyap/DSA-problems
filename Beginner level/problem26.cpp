// problem link => https://www.codechef.com/problems/SEMCOURSES

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

        int total = x * y * z;

        cout << total << endl;
    }
    return 0;
}
