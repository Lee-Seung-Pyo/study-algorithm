#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		if (x) pq.push(x);
		else if (pq.empty()) cout << 0 << endl;
		else {
			cout << pq.top() << endl;
			pq.pop();
		}
	}

	return 0;
}