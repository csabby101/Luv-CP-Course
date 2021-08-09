//https://www.spoj.com/problems/MOZSATLA/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n], s[n - 1];
		for(int i = 0; i < n - 1; i++)
		{
            cin >> s[i];
            arr[i] = 1;
		}
        arr[n - 1] = 1;

		for(int i = 0; i < n - 1; i++)
		{
			if(s[i] == 1)
				arr[i + 1] = arr[i] + 1;
			else if(s[i] == 0)
				arr[i + 1] = arr[i];
		}

        for (int i = n - 2; i >= 0; i--)
        {
            if(s[i] == 2 && arr[i] <= arr[i + 1])
                arr[i] = arr[i + 1] + 1;
            else if(s[i] == 0)
                arr[i] = arr[i + 1];
        }

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
	}

// input test cases
// 10
// 5
// 1 2 0 1
// 5
// 0 0 0 0
// 5
// 1 1 1 1
// 5
// 2 2 2 2
// 5
// 1 1 1 2
// 5
// 1 1 2 2
// 6
// 1 1 1 2 1
// 6
// 1 1 1 2 2
// 10
// 1 1 1 1 2 2 2 2 2
// 8
// 1 2 2 0 0 1 1

// correct output
// 1 2 1 1 2 
// 1 1 1 1 1 
// 1 2 3 4 5 
// 5 4 3 2 1 
// 1 2 3 4 1 
// 1 2 3 2 1 
// 1 2 3 4 1 2 
// 1 2 3 4 2 1 
// 1 2 3 4 6 5 4 3 2 1 
// 1 3 2 1 1 1 2 3 