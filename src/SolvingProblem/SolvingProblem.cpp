#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[1001][1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int p;
			cin >> p;
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + p;
		}
	}
	cout << dp[n][m];

	return 0;
}