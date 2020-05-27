#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string board[2187];

void bbanggu(int n, int x, int y) {
	for (int i = n / 3; i < 2 * n / 3; i++)
		for (int j = n / 3; j < 2 * n / 3; j++)
			board[x + i][y + j] = ' ';
	if (n != 3) {
		bbanggu(n / 3, x, y);
		bbanggu(n / 3, x, y + n / 3);
		bbanggu(n / 3, x, y + 2 * n / 3);
		bbanggu(n / 3, x + n / 3, y);
		bbanggu(n / 3, x + n / 3, y + 2 * n / 3);
		bbanggu(n / 3, x + 2 * n / 3, y);
		bbanggu(n / 3, x + 2 * n / 3, y + n / 3);
		bbanggu(n / 3, x + 2 * n / 3, y + 2 * n / 3);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) board[i].append(n, '*');
	bbanggu(n, 0, 0);
	for (int i = 0; i < n; i++) {
		cout << board[i] << endl;
	}

	return 0;
}