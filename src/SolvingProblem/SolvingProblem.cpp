#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[10001];
const int mx = 100'000;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	fill(dp + 1, dp + k + 1, mx);
	while (n--) {
		int p;
		cin >> p;
		for (int i = p; i <= k; i++) {
			dp[i] = min(dp[i], dp[i - p] + 1);
		}
	}
	if (dp[k] == mx) cout << -1;
	else cout << dp[k];

	return 0;
}