#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            cout << b << endl;
        }
        else if (a < b && b > c)
        {
            cout << a << endl;
        }
        else if (a < b &&)

        {
            cout << c << endl;
        }

        cout << endl;
    }
    return 0;
}