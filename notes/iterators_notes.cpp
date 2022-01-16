#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	vector<int> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	// primitive way of using iterators
	cout << "Using iterators        : ";
	vector<int> ::iterator it;          // declaring the iterator
	for (it = v.begin(); it != v.end(); ++it)
	{
		cout << (*it) << ' ';
	}
	cout << endl;

	// using auto keyword to use iterators easily
	cout << "Using auto keyword     : ";
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		cout << (*it) << ' ';
	}
	cout << endl;

	// usingn auto keyword along with range based loop
	cout << "Using range-based loop : ";
	for(auto val : v)
	{
		cout << val << ' ';
	}
	cout << endl;

	// demonstrating that values using range based loop are passed by value, i.e. copies
	cout << "Passing by val         : ";
	for(auto val : v)
		val++;

	for(auto val : v)
		cout << val << ' ';

	cout << endl;

	// To actually manipulate the values of a vector using range based loop, pass by reference i.e &val
	cout << "Passing by reference   : ";
	for(auto &val : v)
		val++;

	for(auto val : v)
		cout << val << ' ';

	cout << endl << endl;

	// vector of pairs, and using iterators
	vector<pair<int,string> > v_p;
	int n1;
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		int x; string y;
		cin >> x >> y;
		v_p.push_back({x, y});
	}

	for(auto val : v_p)
	{
		cout << val.first << ' ' << val.second << endl;
	}
}

// Sample Input for proper understanding
// 5
// 3 10 2 14 6 
// 3
// 17 abc
// 8 bhyu
// 2 str