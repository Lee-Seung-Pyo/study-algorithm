#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<int> s;
	int k;
	cin >> k;
	while (k--) {
		int n;
		cin >> n;
		if (n) s.push(n);
		else s.pop();
	}
	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;

	return 0;
}