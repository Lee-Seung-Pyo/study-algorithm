#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int arr[100'000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	int ans = INT_MAX;
	for (int i = 0; i < n - 1; i++) {
		int idx = lower_bound(arr + i + 1, arr + n, -arr[i]) - arr;
		if (idx < n) {
			int tmp = arr[i] + arr[idx];
			if (abs(tmp) < abs(ans)) ans = tmp;
		}
		if (idx - 1 != i) {
			int tmp = arr[i] + arr[idx - 1];
			if (abs(tmp) < abs(ans)) ans = tmp;
		}
	}
	cout << ans;

	return 0;
}