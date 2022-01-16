#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	// below functions work for within the range mentioned in the input,
	// for example, the range : v.begin(), v.end()

	// min_element and max_element return iterator!
	int min = *min_element(v.begin(), v.end());
	cout << min << endl;

	int max = *max_element(v.begin(), v.end());
	cout << max << endl;

	// sum of vector, need to give initial sum (0 in most cases) value in input
	int sum = accumulate(v.begin(), v.end(), 0);
	cout << sum << endl;

	// count/freq of an element
	int ct = count(v.begin(), v.end(), 4);
	cout << ct << endl;

	// find fucntion returns iterator to first occurance of an element
	auto it = find(v.begin(), v.end(), 8);
	if (it != v.end())
		cout << *it << endl;
	else
		cout << "Element not found" << endl;

	// another application of the find fucntion
	if (find(v.begin(), v.end(), 10) != v.end())
		// do this...
		cout << "Yes" << endl;
	else
		// do that...
		cout << "No" << endl;


	// reverse function
	reverse(v.begin(), v.end());
	for(auto val : v)
	{
		cout << val << ' ';
	}

}