//https://www.hackerearth.com/problem/algorithm/gpl/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll unsigned long long

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;

    while(t--)
    {
    	int n;
    	cin >> n;

    	string bin;
    	cin >> bin;
            
    	ll num = 0, m = 0;
    	for (int i = n - 1; i >= 0; i--)
    	{
    		if(bin[i] == '1')
            {
                ll k = pow(2, m);
                num += k;
            }
                
            m++;
    	}
    	cout << num << endl;
    }
}