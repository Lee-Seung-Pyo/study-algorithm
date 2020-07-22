#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int paper[2187][2187];
int cnt[3];

bool is_one(int x, int y, int k) {
	int e = paper[x][y];
	for (int i = 0; i < k; i++)
		for (int j = 0; j < k; j++)
			if (paper[x + i][y + j] != e) return false;
	return true;
}

void recur(int x, int y, int k) {
	if (k == 1 || is_one(x, y, k)) {
		cnt[paper[x][y] + 1]++;
		return;
	}
	k /= 3;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			recur(x + k * i, y + k * j, k);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> paper[i][j];
	recur(0, 0, n);
	for (auto e : cnt) cout << e << endl;

	return 0;
}