#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int board[300][300];
bool vis[300][300];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x,y });
	vis[x][y] = 1;
	while (!q.empty()) {
		int cx, cy;
		tie(cx, cy) = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i], ny = cy + dy[i];
			if (vis[nx][ny]) continue;
			if (board[nx][ny]) {
				q.push({ nx,ny });
				vis[nx][ny] = 1;
				continue;
			}
			if(board[cx][cy]) board[cx][cy]--;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> board[i][j];
	}

	int cnt = 0;
	while (1) {
		int bfs_cnt = 0;
		for (int i = 0; i < n; i++) fill(vis[i], vis[i] + m, 0);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] && !vis[i][j]) {
					if (bfs_cnt) { // 두덩이
						cout << cnt;
						return 0;
					}
					bfs(i, j);
					bfs_cnt++;
				}
			}
		}

		if (!bfs_cnt) {
			cout << 0;
			return 0;
		}
		cnt++;
	}

	return 0;
}