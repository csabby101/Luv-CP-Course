// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/
// IF above link doesn't work
// Alternate link : https://assessment.hackerearth.com/challenges/college/coding-contest-batch-2k18/algorithm/cfd6cbbf8dd349be887ed796c74ac3d7/
// Also added pdf of problem statement "z_Aman & Mr.Sharma - HackerEarth" in same directory

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int t = 0, d, circ;
	while (n--)
	{
		int r, x;
		cin >> r >> x;
		d = 100 * x;
		circ = (44 * r) / 7;
		if (d / circ)
			t ++;
	}
	cout << t;
}