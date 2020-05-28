#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string board[64];

void compress(int n, int x, int y) {
	bool flag(true);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[x + i][y + j] != board[x][y]) {
				flag = false;
				break;
			}
		}
	}
	if (flag) {
		cout << board[x][y];
		return;
	}
	cout << '(';
	compress(n / 2, x, y);
	compress(n / 2, x, y + n / 2);
	compress(n / 2, x + n / 2, y);
	compress(n / 2, x + n / 2, y + n / 2);
	cout << ')';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> board[i];
	compress(n, 0, 0);

	return 0;
}