//https://www.codechef.com/problems/STONES

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int count = 0;
		string s1, s2;
		cin >> s2 >> s1;

		int l1 = s1.size(), l2 = s2.size();
		for (int i = 0; i < l1; i++)
		{
			for (int j = 0; j < l2; j++)
			{
				if(s1[i] == s2[j])
				{
					//s2[i] = ' '; noi noobda sawal :(( 
					count++;
					break;
				}
			}
		}
		cout << count << endl;
	}
	
}