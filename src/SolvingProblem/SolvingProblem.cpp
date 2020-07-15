#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[1001][10];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		dp[i][0] = dp[i - 1][0];
		for (int j = 1; j <= 9; j++) {
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 10007;
		}
	}
	int ans = 0;
	for (int i = 0; i < 10; i++) ans += dp[n][i];
	cout << ans % 10007;

	return 0;
}