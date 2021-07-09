//https://codeforces.com/problemset/problem/610/A

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	if (n % 2 == 1)
		cout << 0;
	else
	{
		int w = n / 4;
		if (n % 4 == 0 && n > 0)
			w --;
		cout << w;	
	}
}