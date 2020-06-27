#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
string pic[100];
int vis[100][100];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs(int x, int y) {
	char color = pic[x][y];
	queue<pair<int, int>> q;
	q.push({ x,y });
	vis[x][y] = 1;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i], ny = cur.second + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (pic[nx][ny] == color && vis[nx][ny] == 0) {
				q.push({ nx,ny });
				vis[nx][ny] = 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> pic[i];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j]) continue;
			bfs(i, j);
			cnt++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (pic[i][j] == 'G') pic[i][j] = 'R';
		}
	}
	cout << cnt << ' ';
	cnt = 0;
	for (int i = 0; i < n; i++) fill(vis[i], vis[i] + n, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j]) continue;
			bfs(i, j);
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}