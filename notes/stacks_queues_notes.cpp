#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	stack<int> s;    // Stack : LIFO
	s.push(8);
	s.push(11);
	s.push(3);
	s.push(20);
	while(!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	cout << endl;

	queue<string> q;   // Queue : FIFO
	q.push("rdj");
	q.push("alw");
	q.push("dnlq");
	q.push("cyo");
	while(!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
}