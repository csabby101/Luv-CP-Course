//https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main ()
{
	string s1, s2;
	cin >> s1 >> s2;

	cout << s1.size() << " " << s2.size() << endl;
	cout << s1 + s2 << endl;
	char a = s1[0];
	s1[0] = s2[0];
	s2[0] = a;
	cout << s1 << " " << s2;
}