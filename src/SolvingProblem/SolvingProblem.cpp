#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int p;
		cin >> p;
		dp[i] = p;
		for (int j = 1; j <= i / 2; j++) {
			dp[i] = max(dp[i], dp[j] + dp[i - j]);
		}
	}
	cout << dp[n];

	return 0;
}