// https://www.hackerrank.com/challenges/30-arrays/problem

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << ' ';
	}
}