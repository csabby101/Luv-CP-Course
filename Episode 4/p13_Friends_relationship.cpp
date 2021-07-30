//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            int r = i, r1 = 2 * (a - i), r2 = i;
            //cout << r << r1 << endl;
            while (r--)
            {
                cout << '*';
            }
            while (r1 > 0)
            {
                cout << '#';
                r1--;
            }
            while (r2--)
            {
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
    }
}