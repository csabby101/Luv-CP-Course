//https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

#define fastio ios::sync_with_stdio(0); cin.tie(0);

bool prime(int n)
{
	bool isPrime = true;
	if (n == 0 || n == 1)
	{
		isPrime = false;
	}
	else
	{
		for (int i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}

	return isPrime;
}


int main()
{
	fastio;

	string s;
	cin >> s;
	int len = s.size();
	int total = 0;
	for (int i = 0; i < len; i++)
	{
		if (isupper(s[i]))
		{
			total -= tolower(s[i]);
		}
		else if (islower(s[i]))
		{
			total += toupper(s[i]);
		}
	}

	total = abs(total);

	if (prime(total))
		cout << "1";
	else
		cout << "0";

}