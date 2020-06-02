#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

//한글한글
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int a[10];
	for (int i = 0; i < n; i++) cin >> a[i];
	int ans(0);
	for (int i = n - 1; i >= 0; i--) {
		ans += k / a[i];
		k %= a[i];
	}
	cout << ans;

	return 0;
}