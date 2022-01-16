// merge sort implementation

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int arr[101];

void merge(int l, int r, int mid)
{
	int size_L = mid - l + 1;
	int size_R = r - mid;

	int L[size_L + 1];
	for (int i = 0; i < size_L; i++)
	{
		L[i] = arr[i + l];
	}

	int R[size_R + 1];
	for (int i = 0; i < size_R; i++)
	{
		R[i] = arr[i + mid + 1];
	}

	L[size_L] = R[size_R] = INT_MAX;

	int i_L = 0, i_R = 0; 
	 
	for (int i = l; i <= r; i++)
	{
		if(L[i_L] <= R[i_R])
		{
			arr[i] = L[i_L];
			i_L++;
		}
		else
		{
			arr[i] = R[i_R];
			i_R++;	
		}
	}
}

void mergesort (int l, int r)
{
	if (l == r) return;
	
	int mid = (l + r) / 2;
	mergesort(l, mid);
	mergesort(mid + 1, r);
	merge(l, r, mid);
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	mergesort(0, n - 1);
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}