//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int t = 0, d, circ;
	while (n--)
	{
		int r, x;
		cin >> r >> x;
		d = 100 * x;
		circ = (44 * r) / 7;
		if (d / circ)
			t ++;
	}
	cout << t;
}