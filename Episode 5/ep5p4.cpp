//https://practice.geeksforgeeks.org/problems/remove-character3815/1

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

string removeChars(string string1, string string2) 
{
    int l1 = string1.size(), l2 = string2.size();
    string s = "";
    for(int i = 0; i < l1; i++)
    {
        int flag = 0;
        for(int j = 0; j < l2; j++)
        {
            if(string1[i] == string2[j])
            {
                flag++;
                break;
            }
        }
         
        if(flag == 0)
        {
            s = s + string1[i];
        }
    }
    return s;
}


int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << removeChars(s1, s2);
}