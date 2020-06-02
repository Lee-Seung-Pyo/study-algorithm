#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp1[10005];
int dp2[10005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int val;
	cin >> val;
	for (int i = 0; i <= k; i += val) dp1[i] = 1;
	bool flag = true;
	while (--n) {
		cin >> val;
		if (flag) {
			for (int i = 0; i <= k; i++) {
				dp2[i] = dp1[i];
				if (i - val >= 0) dp2[i] += dp2[i - val];
			}
		}
		else {
			for (int i = 0; i <= k; i++) {
				dp1[i] = dp2[i];
				if (i - val >= 0) dp1[i] += dp1[i - val];
			}
		}
		flag = !flag;
	}
	if (flag) cout << dp1[k];
	else cout << dp2[k];
	return 0;
}