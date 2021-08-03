// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
// driver code not added, only function implementation present

class Solution
{
public:
	// if x is present in arr[] then returns the count of occurrences of x, otherwise returns 0
	int count(int arr[], int n, int x)
	{
		int freq[n];

		for (int i = 0; i < n; i++)
		{
			freq[arr[i]]++;
		}

		if (x < n && freq[x] > 0)
			return freq[x];
		else
			return 0;
	}
};