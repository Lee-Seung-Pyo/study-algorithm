#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m, k, r, c;
int S[40][40];
int s[10][10];

bool pastable(int x, int y) {
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (S[x + i][y + j] && s[i][j]) return false;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			S[x + i][y + j] += s[i][j];
	return true;
}

void rotate() {
	int tmp[10][10];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			tmp[i][j] = s[i][j];
	swap(r, c);
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			s[i][j] = tmp[c - j - 1][i];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	while (k--) {
		cin >> r >> c;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin >> s[i][j];
		bool is_pasted = false;
		for (int t = 0; t < 4; t++) {
			for (int i = 0; i <= n - r; i++) {
				for (int j = 0; j <= m - c; j++) {
					if (pastable(i, j)) {
						is_pasted = true;
						break;
					}
				}
				if (is_pasted) break;
			}
			if (is_pasted) break;
			rotate();
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cnt += S[i][j];
	cout << cnt;

	return 0;
}