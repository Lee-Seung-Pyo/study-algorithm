#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<bool> dp[2];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, s, m;
	cin >> n >> s >> m;
	for (int i = 0; i < 2; i++) dp[i].resize(m + 1, false);
	dp[0][s] = true;
	int cur = 0;
	for (int i = 1; i <= n; i++) {
		int v;
		cin >> v;
		cur = !cur;
		for (int j = 0; j <= m; j++)
			dp[cur][j] = j - v >= 0 && dp[!cur][j - v] || j + v <= m && dp[!cur][j + v];
	}
	int ans = -1;
	for (int i = m; i >= 0; i--) {
		if (dp[cur][i]) {
			ans = i;
			break;
		}
	}
	cout << ans;

	return 0;
}