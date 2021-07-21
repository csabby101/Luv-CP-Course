//https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	while (n--)
	{
		int f, c;
		cin >> f >> c;
		if (c % f == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}