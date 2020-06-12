#include <bits/stdc++.h>
#define endl '\n'
#define INF 1'000'000'000
using namespace std;

int board[101][101];
int nxt[101][101];

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
		nxt[a][b] = b;
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (board[i][j] > board[i][k] + board[k][j]) {
					board[i][j] = board[i][k] + board[k][j];
					nxt[i][j] = nxt[i][k];
				}
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
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (nxt[i][j] == 0) {
				cout << 0 << endl;
				continue;
			}
			vector<int> path;
			int cur = i;
			while (cur != j) {
				path.push_back(cur);
				cur = nxt[cur][j];
			}
			path.push_back(cur);
			cout << path.size() << ' ';
			for (auto e : path) cout << e << ' ';
			cout << endl;
		}
	}

	return 0;
}