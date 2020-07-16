#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[100'001] = { 1,3 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) dp[i] = (2 * dp[i - 1] + dp[i - 2]) % 9901;
	cout << dp[n];

	return 0;
}