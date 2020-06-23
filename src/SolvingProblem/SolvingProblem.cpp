#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
set<int> s;
int arr[8];

void func(int k, int pre) {
	if (k == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << endl;
		return;
	}
	for (auto it = pre == 0 ? s.begin() : s.find(pre); it != s.end(); it++) {
		arr[k] = *it;
		func(k + 1, *it);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	func(0, 0);

	return 0;
}