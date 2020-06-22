#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
int arr[8];
int ans[8];

void func(int k, int pre) {
	if (k == m) {
		for (int i = 0; i < m; i++) cout << ans[i] << ' ';
		cout << endl;
		return;
	}
	for (int i = pre; i < n; i++) {
		ans[k] = arr[i];
		func(k + 1, i);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	func(0, 0);

	return 0;
}