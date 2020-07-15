#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long dp[101] = { 0,1,1,1,2 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 5; i <= 100; i++) {
		dp[i] = dp[i - 1] + dp[i - 5];
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