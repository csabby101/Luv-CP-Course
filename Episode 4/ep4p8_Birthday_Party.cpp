// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12/
// IF above link doesn't work
// Alternate link : https://assessment.hackerearth.com/challenges/college/cod-e-rection/algorithm/a0ccc9efc3b342e09623418ee8bfb320/
// Also added pdf of problem statement "z_Birthday Party - HackerEarth" in same directory

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	while (n--)
	{
		int f, c;
		cin >> f >> c;
		if (c % f == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}