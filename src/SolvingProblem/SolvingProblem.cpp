#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> C[29];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	C[0].push_back(1);
	for (int i = 1; i <= n + m - 2; i++) {
		C[i].push_back(1);
		for (int j = 1; j < i; j++) C[i].push_back(C[i - 1][j - 1] + C[i - 1][j]);
		C[i].push_back(1);
	}
	if (!k) {
		cout << C[n + m - 2][n - 1];
		return 0;
	}
	int x = (k - 1) / m, y = (k - 1) % m;
	int first = C[x + y][x];
	x = n - x - 1, y = m - y - 1;
	int second = C[x + y][x];
	cout << first * second;

	return 0;
}