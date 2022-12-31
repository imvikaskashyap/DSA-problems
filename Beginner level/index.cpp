#include <iostream>
using namespace std;
int main()
{
	int N, x, y;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> x >> y;
		if (x > y)
		{
			cout << "max :" << x << endl;
		}
		else
		{
			cout << "max :" << y << endl;
		}
	}
	return 0;
}