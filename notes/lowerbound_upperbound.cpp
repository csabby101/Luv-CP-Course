#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	// for arrays and vectors : implemented using binary search
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	// array : 2 4 4 25 7 8 5
	// SORTING IS MANDATORY

	sort(v.begin(), v.end());

	for (auto &val : v)
	{
		cout << val << ' ';
	}
	cout << endl;
	// sorted: 2 4 4 5 7 8 25

	// lower bound = [element] or just greater than element
	// it returns an iterator pointing to an element
	auto it = lower_bound(v.begin(), v.end(), 5);   // O(log(n))
	if(it != v.end())
		cout << "lb for 5 : " << *it << endl;

	it = lower_bound(v.begin(), v.end(), 6);
	if(it != v.end())
		cout << "lb for 6 : " << *it << endl;

	// upper bound : just greater than element
	it = upper_bound(v.begin(), v.end(), 5);
	if(it != v.end())
		cout << "ub for 5 : " << *it << endl;

	//----------------------------------------------------------------------------
	// for sets and maps : implemented using tree traversal
	// NO need to sort in case of ordered set and map

	set<int> s;
	// take input
	auto it = s.lower_bound(4);

	map<key, value> m;
	// take input of key-value pairs
	auto it = m.lower_bound(key);

}