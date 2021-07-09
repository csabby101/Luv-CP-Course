//https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int arr[40][40];

void pascal()
{
	for (int i = 0; i < 40; i++)
	{
		arr[i][0] = arr[i][i] = 1;
		for (int j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
}

signed main()
{
    fastio;
    pascal();

    int t;
    cin >> t;

    while(t--)
    {
    	int n;
    	cin >> n;
    	for (int i = 0; i < n; i++)
    	{
    		for (int j = 0; j <= i; j++)
    		{
    			cout << arr[i][j] << ' ';
    		}
    		cout << endl;
    	}
    }
}