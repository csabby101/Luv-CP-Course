//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	string s;
	cin >> s;
	int l = s.size();
	int count = 0;
	for (int i = 0; i < l / 2; i++)
	{
		if (s[i] == s[l - 1 - i])
		{
			count++;
		}
	}
	if (count == l / 2)
	{
		cout << "YES";
	}
	else
		cout << "NO";
}
