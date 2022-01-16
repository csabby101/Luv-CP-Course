#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void printS(set<string> &s)
{
	for (auto val : s)
	{
		cout << val << ' ';
	}
	cout << endl; 
}

int main()
{
	// set aka ordered set : implemented using Red Black Trees
	set<string> s;
	s.insert("abc");   // O(log n)
	s.insert("zsdf");
	s.insert("bcd");
	printS(s);

	auto it = s.find("bcd");   // O(log n)

	if(it != s.end())
	{
		s.erase(it);
	}
	printS(s);

	s.insert("krtp");
	s.erase("abc");
	printS(s);

	// unordered set : implemented using hash tables
	// -------------------------------------------------------------------------------------------

	unordered_set<string> s1;
	int n;
	cin >> n;
	while(n--)
	{
		string str;
		cin >> str;
		s1.insert(str);   // O(1)
	}

	for (auto value : s1)
	{
		cout << value << ' ';
	}
	cout << endl; 

	int q;
	cin >> q;
	while(q--)
	{
		string str;
		cin >> str;
		if(s1.find(str) == s1.end())
			cout << "No" << endl;

		else
			cout << "Yes" << endl;
	}


}

// sample input for unordered set
// 8
// abc
// def
// abc
// ghj
// jkl
// ghj
// gkh
// krt
// 3
// jkl
// ghj
// vty

// sample output for unordered set
// Yes
// Yes
// No