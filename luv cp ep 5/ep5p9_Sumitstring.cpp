//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/sumits-string/

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
			//method 1
			// if(s[i] == 'a' && (s[i + 1] != 'z') && (s[i + 1] != 'a' + 1))
			// {
			// 	cout << "NO" << endl;
			// 	c++;
			// 	break;
			// }
			// if(s[i] == 'z' && (s[i + 1] != 'a') && (s[i + 1] != 'z' - 1))
			// {
			// 	cout << "NO" << endl;
			// 	c++;
			// 	break;
			// }
			// else if((s[i] != 'z') && (s[i] != 'a') &&(s[i] - s[i + 1] != 1) && (s[i] - s[i + 1] != -1))
			// {
			// 	cout << "NO" << endl;
			// 	c++;
			// 	break;
			// }
			
			//method 2
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


