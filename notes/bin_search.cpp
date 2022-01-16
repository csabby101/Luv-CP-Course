#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

// binary search implementation
int bin_search(vector<int> v, int target)
{
	int L = 0, R = v.size() - 1;

	while (L <= R)
	{
		int mid = L + ((R - L) / 2);

		if (v[mid] == target)
			return mid;
		else if (v[mid] < target)
			L = mid + 1;
		else
			R = mid - 1;
	}
	return -1;
}


// lower_bound implementation
int lowerr_bound(vector<int> v, int target)
{
	int L = 0, R = v.size() - 1;

	while (R - L > 1)
	{
		int mid = L + ((R - L) / 2);

		if (v[mid] < target)
			L = mid + 1;
		else
			R = mid;
	}

	if (v[L] >= target)
		return L;
	else if (v[R] >= target)
		return R;
	else
		return -1;
}


// upper_bound implementation
int upperr_bound(vector<int> v, int target)
{
	int L = 0, R = v.size() - 1;

	while (R - L > 1)
	{
		int mid = L + ((R - L) / 2);

		if (v[mid] <= target)
			L = mid + 1;
		else
			R = mid;
	}

	if (v[L] > target)
		return L;
	else if (v[R] > target)
		return R;
	else
		return -1;
}


int main()
{
	int n;
	cin >> n;

	vector<int> v(n);

	// only SORTED values must be provided !!!
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int to_find;
	cin >> to_find;

	int index = bin_search(v, to_find);

	if (index == -1)
		cout << "Not found" << endl;
	else
		cout << "element at index " << index << endl;

	int to_find_lb;
	cin >> to_find_lb;

	index = lowerr_bound(v, to_find_lb);
	if (index == -1)
		cout << "Not found" << endl;
	else
		cout << "lower bound at index " << index << " value : " << v[index] << endl;

	int to_find_ub;
	cin >> to_find_ub;

	index = upperr_bound(v, to_find_ub);
	if (index == -1)
		cout << "Not found" << endl;
	else
		cout << "upper bound at index " << index << " value : " << v[index] << endl;
}