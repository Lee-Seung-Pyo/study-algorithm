#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string gear[4];
int p[4];
int turn[4];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 4; i++) cin >> gear[i];
	int k;
	cin >> k;
	while (k--) {
		int idx, c;
		cin >> idx >> c;
		turn[idx - 1] = -c;
		for (int i = idx - 1; i > 0; i--) {
			if (gear[i][(p[i] + 6) % 8] == gear[i - 1][(p[i - 1] + 2) % 8]) break;
			turn[i - 1] = -turn[i];
		}
		for (int i = idx - 1; i < 3; i++) {
			if (gear[i][(p[i] + 2) % 8] == gear[i + 1][(p[i + 1] + 6) % 8]) break;
			turn[i + 1] = -turn[i];
		}
		for (int i = 0; i < 4; i++) {
			p[i] = (p[i] + turn[i] + 8) % 8;
			turn[i] = 0;
		}
	}
	int ans = 0, bi = 1;
	for (int i = 0; i < 4; i++) {
		ans += (gear[i][p[i]] - '0') * bi;
		bi *= 2;
	}
	cout << ans;

	return 0;
}