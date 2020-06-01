#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[1005][3];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int r, g, b;
		cin >> r >> g >> b;
		if (i == 0) {
			dp[0][0] = r;
			dp[0][1] = g;
			dp[0][2] = b;
			continue;
		}
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + r;
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + g;
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + b;
	}
	cout << min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });

	return 0;
}