#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[1000005];
int b[1000005];
int ans[2000005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	int idxa(0);
	int idxb(0);
	int idxans(0);
	while (idxa < n && idxb < m) {
		if (a[idxa] < b[idxb]) ans[idxans++] = a[idxa++];
		else ans[idxans++] = b[idxb++];
	}
	if (idxa == n) while (idxb < m) ans[idxans++] = b[idxb++];
	else while (idxa < n) ans[idxans++] = a[idxa++];

	for (int i = 0; i < n + m; i++) cout << ans[i] << ' ';

	return 0;
}