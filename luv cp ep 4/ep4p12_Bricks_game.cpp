//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int i = 1;
	while (n > 0)
	{
		if (n <= i)
		{
			cout << "Patlu";
			break;
		}
		n = n - i;
		if (n <= (2*i))
		{
			cout << "Motu";
			break;
		}
		n = n - 2*i;
		i++;
	}
}