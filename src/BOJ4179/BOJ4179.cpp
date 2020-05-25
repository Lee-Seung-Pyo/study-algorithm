#include <bits/stdc++.h>
#define endl '\n'
#define X first
#define Y second
using namespace std;

char board[1005][1005];
int fire[1005][1005];
int walk[1005][1005];
int r, c;
queue<pair<int, int>> q;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
pair<int, int> start;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 1005; i++) {
		fill(fire[i], fire[i] + 1005, INT_MAX);
		fill(walk[i], walk[i] + 1005, INT_MAX);
	}

	cin >> r >> c;
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			cin >> board[i][j];
			if (board[i][j] == 'F') {
				q.push({ i,j });
				fire[i][j] = 0;
			}
			else if (board[i][j] == 'J') {
				start = { i,j };
				walk[i][j] = 0;
			}
		}
	}

	// fire 배열 채우기(불붙는거에 대한 시간정보)
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if ((board[nx][ny] == '.' || board[nx][ny] == 'J') && fire[nx][ny] == INT_MAX) { // 갈수있는데이고 방문x 일 때
				q.push({ nx,ny });
				fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			}
		}
	}

	// 도망가기
	int ans = 0;
	q.push(start);
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (board[nx][ny] == '\0') { // 탈출성공!
				ans = walk[cur.X][cur.Y] + 1;
				break;
			}
			if (board[nx][ny] == '.' && walk[nx][ny] == INT_MAX && fire[nx][ny] > walk[cur.X][cur.Y] + 1) { // 갈수 있는 곳
				q.push({ nx,ny });
				walk[nx][ny] = walk[cur.X][cur.Y] + 1;
			}
		}
		if (ans) break;
	}
	if (ans) cout << ans;
	else cout << "IMPOSSIBLE";

	return 0;
}