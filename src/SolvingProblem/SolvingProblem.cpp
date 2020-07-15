#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[100'001];
const int mx = 1'000'000;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	fill(dp + 1, dp + n + 1, mx);
	for (int i = 1; i * i <= n; i++) {
		for (int j = i * i; j <= n; j++) {
			dp[j] = min(dp[j], dp[j - i * i] + 1);
		}
	}
	cout << dp[n];

	return 0;
}