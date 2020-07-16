#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string s;
int dp[5001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s;
	int sz = s.size();
	if (s[0] == '0') {
		cout << 0;
		return 0;
	}
	dp[0] = 1, dp[1] = 1;
	for (int i = 1, bef = s[0] - '0'; i < sz; i++) {
		int si = s[i] - '0';
		if (!si && bef != 1 && bef != 2) {
			cout << 0;
			return 0;
		}
		if (si) dp[i + 1] += dp[i];
		if (bef && bef * 10 + si < 27) dp[i + 1] += dp[i - 1];
		dp[i + 1] %= 1'000'000;
		bef = si;
	}
	cout << dp[sz];

	return 0;
}