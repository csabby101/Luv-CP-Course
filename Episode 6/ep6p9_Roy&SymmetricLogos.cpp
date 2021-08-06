//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int flag = 0;
		string arr[n];
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i <= (n/2); i++)
		{
			if ((i < (n/2)) && (arr[i] != arr[n - i - 1]))
			{
				flag++;
				break;
			}

			for (int j = 0; j < (n/2); j++)
			{
				if(arr[i][j] != arr[i][n - j - 1])
				{
					flag++;
					break;
				}
			}
		}

		if(flag == 0)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}