#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int board[1000][1000];
bool vis[1000][1000];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
queue<tuple<int, int, int>> q;

void bfs() {
	int w, h, x, y;
	cin >> w >> h;
	for (int i = 0; i < h; i++) fill(vis[i], vis[i] + w, false);
	while (!q.empty()) q.pop();

	for (int i = 0; i < h; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < w; j++) {
			switch (s[j]) {
			case '.':
				board[i][j] = 0;
				break;
			case '#':
				board[i][j] = -1;
				break;
			case '*':
				board[i][j] = 1;
				q.push({ i,j,1 });
				break;
			case '@':
				board[i][j] = 0;
				x = i;
				y = j;
				break;
			}
		}
	}

	while (!q.empty()) {
		int cx, cy, cur;
		tie(cx, cy, cur) = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i], ny = cy + dy[i];
			if (nx < 0 || nx >= h || ny < 0 || ny >= w || board[nx][ny]) continue;
			q.push({ nx,ny,cur + 1 });
			board[nx][ny] = cur + 1;
		}
	}

	q.push({ x,y,1 });
	vis[x][y] = 1;
	while (!q.empty()) {
		int cx, cy, cur;
		tie(cx, cy, cur) = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i], ny = cy + dy[i];
			if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
				cout << cur << endl;
				return;
			}
			if (vis[nx][ny] || board[nx][ny] && board[nx][ny] <= cur + 1) continue;
			q.push({ nx,ny,cur + 1 });
			vis[nx][ny] = 1;
		}
	}
	cout << "IMPOSSIBLE" << endl;
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) bfs();

	return 0;
}