//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int small;
		cin >> small;
		n--;
		while(n--)
		{
			int a;
			cin >> a;
			if (a < small)
				small = a;
		}
		if(k >= small)
			cout << k - small << endl;
		else
			cout << '0' << endl;
	}
}