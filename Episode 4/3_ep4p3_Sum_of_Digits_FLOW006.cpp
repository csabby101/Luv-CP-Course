// https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		int dig_sum = 0;
		while (a > 0)
		{
			dig_sum += a % 10;
			a /= 10;
		}
		cout << dig_sum << endl;
	}
}