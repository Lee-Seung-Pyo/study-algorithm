#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long fact[21] = { 1 };
int arr[20];
bool isused[21];
int n, p;

void p1(long long k, int depth) {
	if (depth > n) return;
	int order = k / fact[n - depth];
	for (int i = 1; i <= n; i++) {
		if (isused[i]) continue;
		if (!order--) {
			arr[depth] = i;
			isused[i] = true;
			break;
		}
	}
	p1(k % fact[n - depth], depth + 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> p;
	for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * i;
	if (p == 1) {
		long long k;
		cin >> k;
		p1(k - 1, 1);
		for (int i = 1; i <= n; i++) cout << arr[i] << ' ';
	}
	else {
		long long k = 0;
		for (int i = 1; i <= n; i++) {
			int cur;
			cin >> cur;
			isused[cur] = true;
			int cnt = 0;
			for (int j = 1; j < cur; j++) {
				if (!isused[j]) cnt++;
			}
			k += cnt * fact[n - i];
		}
		cout << ++k;
	}

	return 0;
}