#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int vis[300][300];
int dx[8] = { -1,-2,-2,-1,1,2,2,1 };
int dy[8] = { -2,-1,1,2,2,1,-1,-2 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) fill(vis[i], vis[i] + n, -1);
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		queue<pair<int,int>> q;
		q.push({ x1,y1 });
		vis[x1][y1] = 0;
		while (!q.empty()) {
			auto cur = q.front(); q.pop();
			int x = cur.first, y = cur.second;
			if (x == x2 && y == y2) break;
			for (int i = 0; i < 8; i++) {
				int nx = x + dx[i], ny = y + dy[i];
				if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
				if (vis[nx][ny] == -1) {
					q.push({ nx, ny });
					vis[nx][ny] = vis[x][y] + 1;
				}
			}
		}
		cout << vis[x2][y2] << endl;
	}

	return 0;
}