#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	// lan=mda functions

	cout << [](int x) {return x + 2;}(5) << endl; // o/p = 7

	auto sum = [](int x, int y) {return x + y;};
	cout << sum(2, 3) << endl << endl;

	// all_of : returns true only when all of the elements satify the condition
	vector<int> v = {2, 3, 5};
	cout << all_of(v.begin(), v.end(), [](int x) {return x > 0;}) << endl;

	// any_of : returns true if any of the elements satifies the condition
	v = {-5, 7, -9};
	cout << any_of(v.begin(), v.end(), [](int x) {return x > 0;}) << endl;

	// none_of : returns true if none of the elements satify the condition
	v = {-5, -7, -9};
	cout << none_of(v.begin(), v.end(), [](int x) {return x > 0;}) << endl;
}