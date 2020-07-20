#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m, k;
int board[8][8];
pair<int, int> cctv[8];
int ans = INT_MAX;

//d = 0: 12시, 1: 3시, 2: 6시, 3: 9시
void myfill(int x, int y, int d) {
	switch (d) {
	case 0:
		while (x >= 0 && board[x][y] != 6) {
			if (board[x][y] <= 0) board[x][y]--;
			x--;
		}
		break;
	case 1:
		while (y < m && board[x][y] != 6) {
			if (board[x][y] <= 0) board[x][y]--;
			y++;
		}
		break;
	case 2:
		while (x < n && board[x][y] != 6) {
			if (board[x][y] <= 0) board[x][y]--;
			x++;
		}
		break;
	case 3:
		while (y >= 0 && board[x][y] != 6) {
			if (board[x][y] <= 0) board[x][y]--;
			y--;
		}
		break;
	}
}

void unfill(int x, int y, int d) {
	switch (d) {
	case 0:
		while (x >= 0 && board[x][y] != 6) {
			if (board[x][y] < 0) board[x][y]++;
			x--;
		}
		break;
	case 1:
		while (y < m && board[x][y] != 6) {
			if (board[x][y] < 0) board[x][y]++;
			y++;
		}
		break;
	case 2:
		while (x < n && board[x][y] != 6) {
			if (board[x][y] < 0) board[x][y]++;
			x++;
		}
		break;
	case 3:
		while (y >= 0 && board[x][y] != 6) {
			if (board[x][y] < 0) board[x][y]++;
			y--;
		}
		break;
	}
}

void recur(int t) {
	if (t == k) {
		int num = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!board[i][j]) num++;
			}
		}
		ans = min(ans, num);
		return;
	}
	int x = cctv[t].first, y = cctv[t].second;
	switch (board[x][y]) {
	case 1:
		for (int i = 0; i < 4; i++) {
			myfill(x, y, i);
			recur(t + 1);
			unfill(x, y, i);
		}
		break;
	case 2:
		for (int i = 0; i < 2; i++) {
			myfill(x, y, i);
			myfill(x, y, i + 2);
			recur(t + 1);
			unfill(x, y, i);
			unfill(x, y, i + 2);
		}
		break;
	case 3:
		for (int i = 0; i < 4; i++) {
			myfill(x, y, i);
			myfill(x, y, (i + 1) % 4);
			recur(t + 1);
			unfill(x, y, i);
			unfill(x, y, (i + 1) % 4);
		}
		break;
	case 4:
		for (int i = 0; i < 4; i++) {
			myfill(x, y, i);
			myfill(x, y, (i + 1) % 4);
			myfill(x, y, (i + 2) % 4);
			recur(t + 1);
			unfill(x, y, i);
			unfill(x, y, (i + 1) % 4);
			unfill(x, y, (i + 2) % 4);
		}
		break;
	case 5:
		for (int i = 0; i < 4; i++) myfill(x, y, i);
		recur(t + 1);
		for (int i = 0; i < 4; i++) unfill(x, y, i);
		break;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] != 0 && board[i][j] != 6) cctv[k++] = { i,j };
		}
	}
	recur(0);
	cout << ans;

	return 0;
}