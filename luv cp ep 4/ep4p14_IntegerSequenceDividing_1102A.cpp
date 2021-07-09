//https://codeforces.com/contest/1102/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    long long int subset_sum = (n * 1LL * (n + 1)) / 2;
    cout << subset_sum % 2;
}