#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[100'005];
int ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cin >> dp[0];
			ans = dp[0];
			continue;
		}
		int tmp;
		cin >> tmp;
		dp[i] = max(dp[i - 1], 0) + tmp;
		ans = max(ans, dp[i]);
	}
	cout << ans;

	return 0;
}