#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int board[50][50] = {};
		int m, n, k;
		cin >> m >> n >> k;
		while (k--) {
			int x, y;
			cin >> x >> y;
			board[x][y] = 1;
		}
		int cnt = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == 0) continue;
				cnt++;
				queue<pair<int, int>> q;
				q.push({ i,j });
				board[i][j] = 0;
				while (!q.empty()) {
					auto cur = q.front(); q.pop();
					int x = cur.first, y = cur.second;
					for (int e = 0; e < 4; e++) {
						int nx = x + dx[e], ny = y + dy[e];
						if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
						if (board[nx][ny]) {
							q.push({ nx,ny });
							board[nx][ny] = 0;
						}
					}
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}