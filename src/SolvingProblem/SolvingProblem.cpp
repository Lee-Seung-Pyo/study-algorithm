#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
int board[100][100];
int vis[100][100];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int bfs(int r) {
	int cnt = 0;
	for (int i = 0; i < n; i++) fill(vis[i], vis[i] + n, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j]<=r || vis[i][j]) continue;
			queue<pair<int, int>> q;
			q.push({ i,j });
			vis[i][j] = 1;
			cnt++;
			while (!q.empty()) {
				auto cur = q.front(); q.pop();
				for (int i = 0; i < 4; i++) {
					int nx = cur.first + dx[i], ny = cur.second + dy[i];
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if (board[nx][ny] <= r || vis[nx][ny]) continue;
					q.push({ nx,ny });
					vis[nx][ny] = 1;
				}
			}
		}
	}
	return cnt;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	int ans = 1;
	for (int i = 1; i < 100; i++) {
		ans = max(ans, bfs(i));
	}
	cout << ans;

	return 0;
}