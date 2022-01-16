#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// unsorted array :      			// 5 4 13 25 7 8
	sort(arr, arr + n); 	 			// 4 5 7 8 13 25
	// if --> sort (arr + 2, arr + n);  // 5 4 7 8 13 25
	// if --> sort(arr, arr + 2); 		// 4 5 13 25 7 8 

	// uses quick sort, heap sort and insertion sort.
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' '; 
	}
	
	// for vectors
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (auto &val : v)
	{
		cout << val << ' ';
	}
}