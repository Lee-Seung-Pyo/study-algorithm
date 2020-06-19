#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int board[100][100];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int m, n, k;
vector<int> ans;

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	board[x][y] = 1;
	int cnt = 1;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i], ny = cur.second + dy[i];
			if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
			if (board[nx][ny] == 0) {
				q.push({ nx,ny });
				board[nx][ny] = 1;
				cnt++;
			}
		}
	}
	ans.push_back(cnt);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> m >> n >> k;
	while (k--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++) {
			for (int j = x1; j < x2; j++) {
				board[i][j] = -1;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] != 0) continue;
			bfs(i, j);
		}
	}
	cout << ans.size() << endl;
	sort(ans.begin(), ans.end());
	for (auto e : ans) cout << e << ' ';

	return 0;
}