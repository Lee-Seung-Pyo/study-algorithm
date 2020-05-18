#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	queue<int> q;
	while (n--) {
		string op;
		cin >> op;
		if (op == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (op == "pop") {
			if (q.empty()) cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (op == "size") {
			cout << q.size() << endl;
		}
		else if (op == "empty") {
			cout << q.empty() << endl;
		}
		else if (op == "front") {
			if (q.empty()) cout << -1 << endl;
			else cout << q.front() << endl;
		}
		else if (op == "back") {
			if (q.empty()) cout << -1 << endl;
			else cout << q.back() << endl;
		}
		else;
	}

	return 0;
}