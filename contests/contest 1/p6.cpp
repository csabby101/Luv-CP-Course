//https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int lcm (int a, int b)
{
	int num, prod = a * b;
	for (int i = 1; i <= prod; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			num = i;
			break;
		}
	}
	return num;
}


signed main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int s = min(a, b);
	int count = 1;
	int lim;

	while (count < c)
	{
		s++;
		if (s % a == 0 || s % b == 0)
			count++;

		if (count == c)
			lim = s;
	}

	int step;
	if (lim % a == 0 && lim % b == 0)
		step = lcm(a, b);
	else if (lim % a == 0)
		step = a;
	else
		step = b;

	for (int i = lim; i >= 0; i = i - step)
	{
		cout << i << ' ';
	}
}