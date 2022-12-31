//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);
    int w;
    float x;

    cin >> w >> x;
    if ((w % 5 == 0) && (x - w - 0.5 >= 0))
    {
        cout << fixed << (x - w - 0.5) << endl;
    }
    else if (w % 5 != 0)
    {
        cout << fixed << x << endl;
    }
    else
    {
        cout << fixed << x << endl;
    }
    return 0;
}

// link => https://www.codechef.com/problems/HS08TEST