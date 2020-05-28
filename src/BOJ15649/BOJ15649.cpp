#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
int isused[8];
int ans[8];

void myPermutation(int depth) {
	if (depth == m) {
		for (int i = 0; i < m; i++) cout << ans[i] + 1 << ' ';
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!isused[i]) {
			ans[depth] = i;
			isused[i] = 1;
			myPermutation(depth + 1);
			isused[i] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	myPermutation(0);

	return 0;
}