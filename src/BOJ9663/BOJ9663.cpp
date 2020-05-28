#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
int isused[14][14];
int ans;

void func(int depth) {
	if (depth == n) {
		ans++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!isused[depth][i]) {
			for (int j = 0; j < n; j++) {
				isused[j][i]++;
				if (i - depth + j >= 0 && i - depth + j < n) isused[j][i - depth + j]++;
				if (i + depth - j >= 0 && i + depth - j < n) isused[j][i + depth - j]++;
			}
			func(depth + 1);
			for (int j = 0; j < n; j++) {
				isused[j][i]--;
				if (i - depth + j >= 0 && i - depth + j < n) isused[j][i - depth + j]--;
				if (i + depth - j >= 0 && i + depth - j < n) isused[j][i + depth - j]--;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	func(0);
	cout << ans;
	return 0;
}