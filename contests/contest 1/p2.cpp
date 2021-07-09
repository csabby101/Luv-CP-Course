//https://www.hackerearth.com/problem/algorithm/jiyas-sequence/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

#define fastio ios::sync_with_stdio(0); cin.tie(0);

signed main()
{
    fastio;

    int t;
    cin >> t;

    while(t--)
    {
    	int n;
    	cin >> n;
    	int arr[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin >> arr[i];
    	}

    	int prod = 1;
    	for (int i = 0; i < n; i++)
    	{
    		prod *= arr[i];
    	}

    	int lsd = prod % 10;
    	if(lsd == 2 || lsd == 3 || lsd == 5)
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;
    }
}