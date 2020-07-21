#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<bool> is_vip(41, false);
int dp[41];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	while (m--) {
		int x;
		cin >> x;
		is_vip[x] = true;
	}
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (is_vip[i] || is_vip[i - 1]) dp[i] = dp[i - 1];
		else dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];

	return 0;
}