#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int board[20][20];
int n, ans;

void push(int before[20][20], int after[20][20]) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			after[i][j] = 0;
	for (int i = 0; i < n; i++) {
		int cur = 0;
		for (int j = 0; j < n; j++) {
			if (!before[i][j]) continue;
			if (!after[i][cur]) after[i][cur] = before[i][j];
			else if (after[i][cur] == before[i][j]) after[i][cur++] *= 2;
			else after[i][++cur] = before[i][j];
		}
	}
}

void rotate(int arr[20][20]) {
	int tmp[20][20] = {};
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			tmp[i][j] = arr[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = tmp[n - j - 1][i];
}

void recur(int before[20][20], int k) {
	if (k == 5) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				ans = max(ans, before[i][j]);
		return;
	}
	int after[20][20] = {};
	for (int i = 0; i < 4; i++) {
		push(before, after);
		recur(after, k + 1);
		rotate(before);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> board[i][j];
	recur(board, 0);
	cout << ans;

	return 0;
}