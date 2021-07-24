//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/k-rotation-is-what-you-can-855157f8/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int n, d;
	cin >> n >> d;
	int arr[n], arr1[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for(int i = 0; i < n; i++)
	{
		arr1[(i - d + n) % n] = arr[i]; 
	}

	for(int i = 0; i < n; i++)
	{
		cout << arr1[i] << ' ';
	}
}