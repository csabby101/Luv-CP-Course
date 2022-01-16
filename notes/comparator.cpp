#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair

bool desc_sum(pair<int, int> &a, pair<int, int> &b)
{
	if(a == b)
			return false;
	else
		return a.F + a.S > b.F + b.S;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int> > v;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.PB(MP(a, b));
	}

	// sort function has default ordering as ascending
	// to set custom condition for the sort function we can define comparator functions
	// for example, sorting pairs in descending order acc to the value of the sum of pair

	sort(v.begin(), v.end(), desc_sum);

	for(auto &val : v)
	{
		cout << val.F << ' ' << val.S << endl;
	}

	cout << endl;
	// some buit-in comparators also exist
	// for example, for sorting in desc order

	sort(v.begin(), v.end(), greater<pair<int, int> >() );

	for(auto &val : v)
	{
		cout << val.F << ' ' << val.S << endl;
	}

}