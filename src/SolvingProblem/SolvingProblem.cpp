#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int board[100][100][100];
int dz[6] = { -1,1,0,0,0,0 };
int dx[6] = { 0,0,-1,1,0,0 };
int dy[6] = { 0,0,0,0,-1,1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n, h;
	cin >> m >> n >> h;
	queue<tuple<int,int,int,int>> q;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> board[k][i][j];
				if (board[k][i][j] == 1) q.push({ k,i,j,0 });
			}
		}
	}
	int mx = 0;
	while (!q.empty()) {
		int cz, cx, cy, cd;
		tie(cz, cx, cy, cd) = q.front(); q.pop();
		for (int i = 0; i < 6; i++) {
			int nz = cz + dz[i], nx = cx + dx[i], ny = cy + dy[i];
			if (nz < 0 || nz >= h || nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (board[nz][nx][ny] == 0) {
				q.push({ nz,nx,ny,cd + 1 });
				board[nz][nx][ny] = 1;
				mx = cd + 1;
			}
		}
	}
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[k][i][j] == 0) {
					cout << -1;
					return 0;
				}
			}
		}
	}
	cout << mx;

	return 0;
}