//https://leetcode.com/problems/goal-parser-interpretation/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

string interpret(string command) {
    int l = command.size();
    string s = "";
    for (int i = 0; i < l; i++)
    {
        if (command[i] == 'G')
        {
            s = s + 'G';
        }
        else if (command[i] == '(' && command[i + 1] == ')')
        {
            s = s + 'o';
        }
        else if (command[i] == '(' && command[i + 1] == 'a')
        {
            s = s + "al";
        }
    }
    return s;
}

int main()
{
    string str;
    cin >> str;
    cout << interpret(str);
}
