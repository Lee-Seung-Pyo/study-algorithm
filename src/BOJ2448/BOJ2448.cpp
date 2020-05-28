#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string board[3072];

void star(int n, int x, int y) {
	if (n == 3) {
		board[x][y] = '*';
		board[x+1][y-1] = '*';
		board[x+1][y+1] = '*';
		board[x+2][y-2] = '*';
		board[x+2][y-1] = '*';
		board[x+2][y] = '*';
		board[x+2][y+1] = '*';
		board[x+2][y+2] = '*';
		return;
	}
	star(n / 2, x, y);
	star(n / 2, x + n / 2, y - n / 2);
	star(n / 2, x + n / 2, y + n / 2);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) board[i].append(2 * n, ' ');
	star(n, 0, n - 1);
	for (int i = 0; i < n; i++) cout << board[i] << endl;

	return 0;
}