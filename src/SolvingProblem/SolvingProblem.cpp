#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int T[16];
int P[16];
int dp[16];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> T[i] >> P[i];
	for (int i = 1; i <= n; i++) {
		if (i + T[i] - 1 <= n)
			dp[i + T[i] - 1] = max(dp[i + T[i] - 1], dp[i - 1] + P[i]);
		dp[i] = max(dp[i], dp[i - 1]);
	}
	cout << dp[n];

	return 0;
}