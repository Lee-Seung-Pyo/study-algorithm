#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
map<int, int> remain;
int arr[8];

void func(int k, int pre) {
	if (k == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << endl;
		return;
	}
	for (auto it = pre == 0 ? remain.begin() : remain.find(pre); it != remain.end(); it++) {
		if (it->second == 0) continue;
		arr[k] = it->first;
		it->second--;
		func(k + 1, it->first);
		it->second++;
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
	func(0, 0);

	return 0;
}