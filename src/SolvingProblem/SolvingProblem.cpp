#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int p[10001];
int dp[10001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> p[i];
	dp[1] = p[1];
	dp[2] = p[1] + p[2];
	for (int i = 3; i <= n; i++) {
		dp[i] = max({ dp[i - 1], dp[i - 2] + p[i], dp[i - 3] + p[i - 1] + p[i] });
	}
	cout << dp[n];

	return 0;
}