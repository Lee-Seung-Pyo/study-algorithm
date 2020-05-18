#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	stack<pair<int, int>> s;
	for (int i = 1; i <= n; i++) {
		int len;
		cin >> len;
		while (1) {
			if (s.empty()) {
				cout << "0 ";
				s.push(make_pair(i, len));
				break;
			}
			if (s.top().second > len) {
				cout << s.top().first << ' ';
				s.push(make_pair(i, len));
				break;
			}
			else {
				s.pop();
			}
		}
	}

	return 0;
}