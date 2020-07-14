#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[101][10];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	fill_n(&dp[1][1], 9, 1);
	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1];
		dp[i][9] = dp[i - 1][8];
		for (int j = 1; j < 9; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1'000'000'000;
		}
	}
	int ans = 0;
	for (auto e : dp[n]) ans = (ans + e) % 1'000'000'000;
	cout << ans;

	return 0;
}