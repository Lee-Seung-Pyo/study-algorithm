#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int cumul[301][301];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int input;
			cin >> input;
			cumul[i][j] = input + cumul[i - 1][j] + cumul[i][j - 1] - cumul[i - 1][j - 1];
		}
	}
	int k;
	cin >> k;
	while (k--) {
		int i, j, x, y;
		cin >> i >> j >> x >> y;
		cout << cumul[x][y] - cumul[x][j - 1] - cumul[i - 1][y] + cumul[i - 1][j - 1] << endl;
	}

	return 0;
}