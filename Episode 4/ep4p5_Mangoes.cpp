//https://www.hackerearth.com/problem/algorithm/mangoes/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a;
	cin >> a;

	if (a % 2 == 1 || a == 0 || a == 2)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}

//silly mistake : a == 2 wala case nhi socha
//divide toh ho jaega 2 se but even numbers me divide na hoga, 1 + 1, 1 ain't even