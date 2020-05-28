#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
int ans[8];

void func(int depth) {
	if (depth == m) {
		for (int i = 0; i < m; i++) cout << ans[i] + 1 << ' ';
		cout << endl;
		return;
	}
	for (int i = depth == 0 ? 0 : ans[depth - 1]; i < n; i++) {
		ans[depth] = i;
		func(depth + 1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	func(0);

	return 0;
}