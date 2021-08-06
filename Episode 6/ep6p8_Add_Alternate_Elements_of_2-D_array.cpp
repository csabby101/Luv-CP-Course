// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/add-alternate-elements-of-2-dimensional-array/
// Alternate link : https://assessment.hackerearth.com/challenges/college/game-of-code-2/algorithm/5ea8abb1ab784e7eb77188bb05adc5a8/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n = 9, sum_odd = 0, sum_eve = 0;

	for (int i = 1; i <= 9; i++)
	{
		int x;
		cin >> x;
		if(i % 2 == 0)
			sum_eve += x;
		else
			sum_odd += x;
	}

	cout << sum_odd << endl << sum_eve;
}