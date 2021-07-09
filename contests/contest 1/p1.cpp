//https://www.hackerearth.com/problem/algorithm/capitalbaazi/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int main()
{
    fastio;

    string s;
    getline(cin, s);
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
    	if(s[i] != ' ')
    	{
    		cout << (char)(s[i] - 32);
    	}
    	else
    	{
    		cout << endl;
    	}
    }
}
