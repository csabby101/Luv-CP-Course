#include <bits/stdc++.h>
using namespace std;

// implementation of nth_root : pow(x, 1.0/n)
// time complexity : n * log(x * (10 ^ p))

double nth_root(double x, int n)
{
	double lo = 1, hi = x;
	int val = 0;

	// for precision p, use epsilon as 1e-(p + 1)
	double eps = 1e-6; // for accuracy till 5 decimal places 

	while(hi - lo > eps)
	{
		double mid = lo + ((hi - lo) / 2);

		if(pow(round(mid), n) == x)
			return round(mid);

		else if(pow(mid, n) < x)
			lo = mid;
		
		else
			hi = mid;
	}

	return lo;
}


int main()
{
	// x is the number whose (1/n)th power is to be found
	double x; int n;
	cin >> x >> n;

	cout << setprecision(10) << nth_root(x, n) << endl;

	// for comparison
	cout << pow(x, 1.0/n);
}