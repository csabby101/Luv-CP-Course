// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/sumits-string/
// the link above apparently DOES NOT work anymore
// Alternate link : https://assessment.hackerearth.com/challenges/college/string-basics/algorithm/28ad292dad114b21afc9d18618e9aa19/
// To avoid any future incoveniences, added a pdf with name "z_Sumit's String - HackerEarth" in the same directory

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int c = 0;
		string s;
		cin >> s;
		int l = s.size();
		for (int i = 0; i < l - 1; i++)
		{
			if((abs(s[i + 1] - s[i]) != 1) && (abs(s[i + 1] - s[i]) != 25))
			{
				//cout << abs(s[i + 1] - s[i]) << endl;
				cout << "NO" << endl;
				c++;
				break;
			}
		}
		if (c == 0)
			cout << "YES" << endl;
	}
}


