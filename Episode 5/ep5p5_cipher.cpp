// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/
// problem link BROKEN ik :((

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	string s; 
	cin >> s;
	int k;
	cin >> k;
	int l = s.size();
	for (int i = 0; i < l; i++)
	{
		int m = s[i];
		int key = k;
		if (m >= 'A' && m <= 'Z')
		{
			key = key % 26;
			m = (m + key);
			if (m > 'Z')
				m = m - 26;
			cout << (char) (m);
		}
		else if (m >= 'a' && m <= 'z')
		{
			key = key % 26;
			m = (m + key);
			if (m > 'z')
				m = m - 26;
			cout << (char) m;
		}
		else if (m >= '0' && m <= '9')
		{
			key = key % 10;
			m = (m + key);
			if (m > '9')
				m = m - 10;
			cout << (char) m;
		}
		else
		{
			cout << s[i];
		}
	}
}