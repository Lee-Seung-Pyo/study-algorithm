#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int arr[100];

int gcd(int a, int b) {
	while (a) {
		b %= a;
		swap(a, b);
	}
	return b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) cin >> arr[i];
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) sum += gcd(arr[i], arr[j]);
		}
		cout << sum << endl;
	}

	return 0;
}