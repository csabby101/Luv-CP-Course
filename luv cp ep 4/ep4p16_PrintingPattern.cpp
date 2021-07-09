//https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		while((n - a) > (n - i))
		{
			cout << n - a << " ";
			a++;
		}

		int key = 2*(n - i) - 1;
		while(key--)
		{
			cout << n - i << " ";
		}

		a = 1;
		while((n - i + a) <= n)
		{
			cout << n - i + a << " ";
			a++;
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++)
	{
		int a = 0;
		while((n - a) > (i + 1))
		{
			cout << (n - a) << " ";
			a++;
		}

		int key = 2*i + 1;
		while(key--)
		{
			cout << i + 1 << " ";
		}

		a = 1;
		while((i + 1 + a) <= n)
		{
			cout << i + 1 + a << " ";
			a++;
		}
		cout << endl;
	}

}