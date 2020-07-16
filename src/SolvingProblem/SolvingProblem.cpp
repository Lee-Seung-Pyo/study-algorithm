#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long dp[100][100];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			if (!dp[i][j] || !x) continue;
			if (i + x < n) dp[i + x][j] += dp[i][j];
			if (j + x < n) dp[i][j + x] += dp[i][j];
		}
	}
	cout << dp[n - 1][n - 1];


	return 0;
}