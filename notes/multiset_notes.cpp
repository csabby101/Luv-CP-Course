#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void printS(multiset<string> &s)
{
	for (auto val : s)
	{
		cout << val << ' ' << endl;
	}
	cout << endl; 
}

int main ()
{
	multiset<string> s;

	s.insert("abc");
	s.insert("hpcq");
	s.insert("bcd");
	s.insert("abc"); // allows insertion of duplicates
	s.insert("tjrc");
	s.insert("eplt");
	s.insert("hpcq"); 

	printS(s);

	// difference in methods of erasing a value from the multiset using .erase()

	auto it = s.find("hpcq"); // returns the iterator pointing to the first occurance of this string

	if(it != s.end())
	{
		s.erase(it);  // erase the string present at that iterator
	}
	printS(s);

	s.erase("abc"); // erases all occurances of the given string
	printS(s);

}