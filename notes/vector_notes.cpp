#include <bits/stdc++.h>
using namespace std;

#define endl "\n"


void printV(vector<int> v)
{
	int size = v.size();
	for (int i = 0; i < size; i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
}


int main()
{
	// pairs
	int n;
	cin >> n;
	pair<int,string> p[n];

	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first >> p[i].second;
	}

	for (int i = 0; i < n; i++)
	{
		cout << p[i].first << ' ' << p[i].second << endl;
	}

// ------------------------------------------------------------------------------------------------------------
// vectors
	
	vector<int> v;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	printV(v);

	// the declaration below creates a vector v1 of size 10 and initializes all values to 2.
	vector<int> v1(10, 2);
	printV(v1);

	v.pop_back(); // pop_back() removes the last element of the vector
	printV(v);

// ------------------------------------------------------------------------------------------------------------
// array of N vectors

	int N;
	cin >> N;

	vector<int> v[N];
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		while(n--)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	for (int i = 0; i < N; i++)
	{
		printV(v[i]); 
	}


// -----------------------------------------------------------------------------------------------------------
// vector of vectors

	int N;
	cin >> N;

	vector<vector<int> > v;
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		v.push_back(vector<int> ());
		while(n--)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	for (int i = 0; i < N1; i++)
	{
		printV(v[i]); 
	}
}