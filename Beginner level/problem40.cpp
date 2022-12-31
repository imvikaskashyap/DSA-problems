#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int xRoomCost = x * 3;
        int yRoomCost = y * 2;

        if (xRoomCost < yRoomCost)
        {
            cout << xRoomCost << endl;
        }
        else
        {
            cout << yRoomCost << endl;
        }
    }
    return 0;
}

// link=> https://www.codechef.com/problems/SIXFRIENDS