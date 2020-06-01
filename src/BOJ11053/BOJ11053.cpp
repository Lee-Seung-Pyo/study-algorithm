#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[1005];
int dp[1005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	fill(dp, dp + 1005, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i]) dp[i] = max(dp[i], dp[j]+1);
		}
	}
	cout << *max_element(dp, dp + n);

	return 0;
}