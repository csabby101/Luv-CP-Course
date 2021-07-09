//https://leetcode.com/problems/student-attendance-record-i/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	string s;
	cin >> s;
	int l = s.size();
    int a = 0;
    for (int i = 0; i < l; i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }
        else if(s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L')
        {
            cout <<  "false";
            return 0;
        }
        if (a >= 2)
        {
            cout <<  "false";
            return 0;
        }
    }
    cout <<  "true";
}