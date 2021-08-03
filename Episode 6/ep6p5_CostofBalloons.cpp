// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int great(int m, int n)
{
	if (m > n)
		return m;
	return n;
}

int les(int m, int n)
{
	if (n < m)
		return n;
	return m;
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int g, p;
		cin >> g >> p;
		int count;
		cin >> count;
		int sum_a = 0, sum_b = 0;
		for (int i = 0; i < count; i++)
		{
			int a = 0, b = 0;
			cin >> a >> b;
			sum_a += a;
			sum_b += b;
		}
		cout << great(sum_b, sum_a) * les(g, p) + les(sum_a, sum_b) * great(g, p) << endl;
	}
}