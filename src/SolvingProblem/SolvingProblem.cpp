#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int board[20][20];
int c[20];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> board[i][j];
	}
	fill(c, c + n / 2, 1);
	int ans = INT_MAX;
	do {
		int sum = 0;
		vector<int> t1;
		vector<int> t2;
		for (int i = 0; i < n; i++) {
			if (c[i]) {
				for (int e : t1) sum += board[i][e] + board[e][i];
				t1.push_back(i);
			}
			else {
				for (int e : t2) sum -= board[i][e] + board[e][i];
				t2.push_back(i);
			}
		}
		ans = min(ans, abs(sum));
	} while (prev_permutation(c, c + n));
	cout << ans;

	return 0;
}