#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[1001];
int dp[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	fill(dp + 1, dp + n + 1, 1);
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (a[j] > a[i]) dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) ans = max(ans, dp[i]);
	cout << ans;

	return 0;
}