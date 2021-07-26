// https://practice.geeksforgeeks.org/problems/reverse-a-string/1

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

string reverseWord(string str){
    string str_rev;
    for (int i = str.size() - 1; i >= 0 ; i--)
    {
        str_rev.push_back(str[i]);
    }
    return str_rev;
}

int main ()
{
	string s;
	cin >> s;
	cout << reverseWord(s);
}