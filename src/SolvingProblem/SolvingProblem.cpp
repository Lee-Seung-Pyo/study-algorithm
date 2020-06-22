#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int select[8] = {};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) select[i] = 1;
	do {
		for (int i = 0; i < n; i++) {
			if (select[i]) cout << i + 1 << ' ';
		}
		cout << endl;
	} while (prev_permutation(select, select + n));

	return 0;
}