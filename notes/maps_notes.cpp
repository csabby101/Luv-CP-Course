#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

// maps are implemented using Red Black Trees

void printM(map<int, string> &m)
{
	for (auto &pr : m)
	{
		// data access karne ki bhi time complexity O(log n) rehti, same as insertion
		cout << pr.first << ' ' << pr.second << endl;
	}
	cout << endl;
}


int main()
{
	map<int, string> m;

	// insertion in map ki complexity : O(log n), where n is current size of map

	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"});  // another way to insert data in map

	m[6];  // agar key daali and value nhi daali toh by default empty string, ya fir 0(in case of int value) assign hoti

	m[5] = "jdey";   // agar wapas same key pe insert karte to 'value' ki value override (replace) ho jaati nyi value se

	// all this input will be stored in the map in a sorted order
	// sorting based on keys

	printM(m);

	// .find() returns an iterator if value for a key found, in O(log n) time
	// else returns the iterator of m.end()
	auto it = m.find(3);

	if (it == m.end())
		cout << "No value";
	else
		cout << it->first << ' ' << it->second << endl;

	cout << endl;

	// .erase() erases the key-value pair for a key, in O(log n) time
	m.erase(3);

	// it also takes the value of iterator pointing to a pair and deletes that pair.
	it = m.find(4);
	if (it != m.end())
		m.erase(it);

	printM(m);

	// .clear() deletes the complete map

}