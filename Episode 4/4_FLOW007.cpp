//https://www.codechef.com/LRNDSA01/problems/FLOW007

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;

	while (n--)
	{
		int a;
		cin >> a;
		int b, num = 0;
		while (a > 0)
		{
			b = a % 10;
			num = (num * 10) + b;
			a /= 10;
		}
		cout << num << endl;
	}
}