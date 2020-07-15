#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[100001][3]; // 0:첫번째선택 1:두번째선택 2:선택하지않음
int p[100001][2];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= n; j++) cin >> p[j][i];
		}
		dp[1][0] = p[1][0];
		dp[1][1] = p[1][1];
		for (int i = 2; i <= n; i++) {
			dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + p[i][0];
			dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + p[i][1];
			dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]); //두 칸 연속 빈칸이 나올순 없다.
		}
		cout << max({ dp[n][0], dp[n][1], dp[n][2] }) << endl;
	}

	return 0;
}