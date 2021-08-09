// https://www.codechef.com/LRNDSA01/problems/CARVANS

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)    
    {
        int n;
        cin >> n;
        int arr[n + 1] = {0};
        arr[0] = INT_MAX;
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if(arr[i] <= arr[i - 1])
                count++;
            else
                arr[i] = arr[i - 1];
        }
        cout << count << endl;
    }
}