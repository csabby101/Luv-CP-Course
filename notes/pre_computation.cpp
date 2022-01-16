#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

const int N = 2e6 + 5;
const int MOD = 1e9 + 7;

int fact[N];
int freq[N];
int pf[N];
int pfsum[N][N];

// caching, or storing element count in an array
void freq(int arr[])
{
	for (int i = 0; i < N; i++)
	{
		freq[arr[i]]++;
	}
}

// pre-computing factorials
void factorials()
{
	fact[0] = fact[1] = 1;
	for (int i = 2; i < N; i++)
	{
		fact[i] = (fact[i - 1] * i) % MOD;
	}
}

// prefix-sum for a 1-D array
// NOTE - Use index 1 based arrays for questions involving prefix-sum
void prefix_sum_1D(int arr[])
{
	for (int i = 1; i <= N; i++)
	{
		pf[i] = pf[i - 1] + arr[i];
	}
}


// prefix-sum for a 2-D array
void prefix_sum_2D(int arr[][N])
{
	for (int i = 1; i <= N; i++)
	{
		for (int i = 1; i <= N; i++)
		{
			pfsum[i][j] = arr[i][j] + pfsum[i - 1][j] + pfsum[i][j - 1] - pfsum[i - 1][j - 1];
		}
	}
}

int main()
{
	fastio;
}