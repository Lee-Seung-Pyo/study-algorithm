#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[5] = {};
	for (int i = 0; i < 5; i++) cin >> arr[i];
	int ans = INT_MAX;
	for (int i = 0; i < 3; i++) {
		int a = arr[i];
		for (int j = i + 1; j < 4; j++) {
			int b = arr[j];
			int t_gcd = gcd(a, b);
			int t_lcm = a * b / t_gcd;
			for (int k = j + 1; k < 5; k++) {
				int c = arr[k];
				int n_gcd = gcd(t_lcm, c);
				int n_lcm = t_lcm * c / n_gcd;
				ans = min(ans, n_lcm);
			}
		}
	}
	cout << ans;

	return 0;
}