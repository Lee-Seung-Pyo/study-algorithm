#include <bits/stdc++.h>
#define endl '\n'
#define X first
#define Y second
using namespace std;

int board[505][505];
int n, m;
int cnt, maxval;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs(pair<int,int> s) {
	cnt++;
	int val(0);
	queue<pair<int, int>> q;
	q.push(s);
	board[s.X][s.Y] = 0;
	val++;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int tmpX = cur.X + dx[i];
			int tmpY = cur.Y + dy[i];
			if (board[tmpX][tmpY]) {
				q.push({ tmpX,tmpY });
				board[tmpX][tmpY] = 0;
				val++;
			}
		}
	}
	maxval = max(maxval, val);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> board[i][j];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (board[i][j]) {
				bfs({ i,j });
			}
		}
	}

	cout << cnt << endl;
	cout << maxval << endl;

	return 0;
}