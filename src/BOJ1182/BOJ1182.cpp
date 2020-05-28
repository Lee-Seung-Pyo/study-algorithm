#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, s;
	cin >> n >> s;
	int arr[20];
	int ans(0);
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 1; i < (1 << n); i++) {
		int sum(0);
		int mask(i);
		for (int j = 0; j < n; j++) {
			if (mask & 1) sum += arr[j];
			mask >>= 1;
		}
		if (sum == s) ans++;
	}
	cout << ans;

	return 0;
}