#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string board[1000];
bool vis[1000][1000][2];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> board[i];
	queue<tuple<int, int, int, bool>> q; //x,y,cnt,wall
	q.push({ 0,0,1,0 });
	vis[0][0][0] = 1, vis[0][0][1] = 1;
	while (!q.empty()) {
		int x, y, cnt, isused;
		tie(x, y, cnt, isused) = q.front(); q.pop();
		if (x == n - 1 && y == m - 1) {
			cout << cnt;
			return 0;
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny][isused]) continue;
			if (board[nx][ny] == '0') {
				q.push({ nx,ny,cnt + 1,isused });
				vis[nx][ny][1] = 1;
				if (!isused) vis[nx][ny][0] = 1;
				continue;
			}
			if (!isused) {
				q.push({ nx,ny,cnt + 1,1 });
				vis[nx][ny][1] = 1;
			}
		}
	}
	cout << -1;

	return 0;
}