#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
map<int, int> remain;
int arr[8];

void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << endl;
		return;
	}
	for (auto e : remain) {
		if (e.second == 0) continue;
		arr[k] = e.first;
		remain[e.first]--;
		func(k + 1);
		remain[e.first]++;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		auto it = remain.find(x);
		if (it == remain.end()) remain[x] = 1;
		else remain[x]++;
	}
	func(0);

	return 0;
}