#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

pair<long long, long long> dp[91]; //(n자리 이친수가 0으로 끝나는 개수, 1로 끝나는 개수)

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	dp[1] = { 0,1 };
	dp[2] = { 1,0 };
	for (int i = 3; i <= n; i++) {
		dp[i] = { dp[i - 1].first + dp[i - 1].second, dp[i - 1].first };
	}
	cout << dp[n].first + dp[n].second;
	return 0;
}