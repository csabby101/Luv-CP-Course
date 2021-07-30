// https://www.hackerearth.com/practice/math/combinatorics/basics-of-combinatorics/practice-problems/algorithm/bob-and-internship/
// the link above apparently DOES NOT work anymore
// Alternate link : https://assessment.hackerearth.com/challenges/college/practice-contest-3/algorithm/7cf32b588dfc4a7d9727f4b8a636e057/
// Login before using the link above
// To avoid any future incoveniences, added a pdf with name "Z_Bob and Internship - HackerEarth" in the same directory

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int N = 2e6 + 5;
const int MOD = 1e9 + 7;

int fact[N], invfact[N];

int pow(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return ans;
}

int modinv(int k)
{
    return pow(k, MOD - 2, MOD);
}

void precompute()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    invfact[N - 1] = modinv(fact[N - 1]);

    /*for (int i = 2; i < N; i++)
    {
        invfact[i] = modinv(fact[i]) % MOD;
    }*/

    for (int i = N - 2; i >= 0; i--)
    {
        invfact[i] = (invfact[i + 1] * (i + 1)) % MOD;
    }
}

int nCr(int n, int r)
{
    if (r > n)
        return 0;
    int num = (((fact[n] * invfact[r]) % MOD) * invfact[n - r]) % MOD;
    return num;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    if (k == 0)
    {
        cout << nCr(n, m) << endl;
    }

    else
    {
       int p = n - (k * (m - 1));
       cout << nCr(p, m) << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    precompute();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}


//good test case
//11
//889859 362381 275111
//487854 195438 182335
//871545 460507 172337
//410243 390758 0
//346609 85752 1
//580025 127343 836835
//432575 14679 5
//723475 49652 9
//634772 544142 0
//695546 559625 717027
//671282 58916 55015

//output
//0
//0
//0
//926382321
//146117232
//0
//417479791
//704293891
//635521277
//0
//0