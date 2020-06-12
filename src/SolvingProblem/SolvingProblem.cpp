#include <bits/stdc++.h>
#define endl '\n'
#define INF 1'000'000'000
using namespace std;

int board[101][101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fill(board[i] + 1, board[i] + n + 1, INF);
		board[i][i] = 0;
	}
	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		board[a][b] = min(board[a][b], c);
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				board[i][j] = min(board[i][j], board[i][k] + board[k][j]);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (board[i][j] == INF) board[i][j] = 0;
			cout << board[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}