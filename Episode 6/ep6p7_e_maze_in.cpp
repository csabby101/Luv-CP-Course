// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/
// Alternate link : https://assessment.hackerearth.com/challenges/college/execute1/algorithm/f60fcbce080847e184234d5d0581b6f0/
// pdf containing problem statement added in the same directory to avoid any future inconvenience.

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	string s;
	cin >> s;
	int size = s.size();
	int u = 0, d = 0, r = 0, l = 0;
	for(int i = 0; i < size; i++)
	{
		char c = s[i];
		
		if(c == 'L')
			l++;
		else if (c == 'R')
			r++;
		else if (c == 'U')
			u++;
		else if (c == 'D')
			d++;
	}
	cout << r - l << ' ' << u - d;
}