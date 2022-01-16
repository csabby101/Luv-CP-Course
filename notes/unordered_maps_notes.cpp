#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

// Unordered maps are implemented using Hash tables
// primitive data types hi use kar sakte unordered map me

void printM(unordered_map<int, string> &m)
{
	for (auto &pr : m)
	{
		// data access karne ki bhi time complexity O(1) rehti, same as insertion
		cout << pr.first << ' ' << pr.second << endl;
	}
	cout << endl;
}


int main()
{
	unordered_map<int, string> m;

	// insertion in map ki complexity : O(1)

	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"});  // another way to insert data in map

	printM(m);
}