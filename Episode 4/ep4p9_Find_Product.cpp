// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main ()
{
	int n;
	cin >> n;
	long long int prod = 1;
	while (n--)
	{
		int a;
		cin >> a;
		prod = (prod * a) % MOD;
	}
	cout << prod;
}