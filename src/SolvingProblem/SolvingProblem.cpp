#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[11] = { 1,1,2, };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 3; i < 11; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}

	return 0;
}