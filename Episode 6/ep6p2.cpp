//https://practice.geeksforgeeks.org/problems/sums-of-i-th-row-and-i-th-column3054/1
// something on the lines of the ques above

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[n][m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	int c = n;
	while (c--)
	{
		int sum_r = 0, sum_c = 0;
		for(int k = 0; k < m; k++)
		{
			sum_r += arr[n - c - 1][k];
		}
		//cout << "sum of row " << n - c << ' ' << sum_r << endl;
		for(int k = 0; k < n; k++)
		{
			sum_c += arr[k][n - c- 1];
		}
		//cout << "sum of column " << n - c << ' ' << sum_c << endl;
		if(sum_r == sum_c)
		{
			cout << '1' << endl;
		}
		else if(sum_r != sum_c)
		{
			cout << '0' << endl;
		}
	}
}