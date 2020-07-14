#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int s[8];
int w[8];
int n;
int mx = 0;

void recur(int cur) {
	if (cur == n) {
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] <= 0) cnt++;
		}
		mx = max(mx, cnt);
		return;
	}
	if (s[cur] <= 0) {
		recur(cur + 1);
		return;
	}
	bool flag = false;
	for (int i = 0; i < n; i++) {
		if (i == cur || s[i] <= 0) continue;
		flag = true;
		s[cur] -= w[i];
		s[i] -= w[cur];
		recur(cur + 1);
		s[cur] += w[i];
		s[i] += w[cur];
	}
	if (!flag) recur(cur + 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i] >> w[i];
	recur(0);
	cout << mx;

	return 0;
}