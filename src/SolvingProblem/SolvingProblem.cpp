#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int cnt[2] = {};
	int tmp = n;
	while (tmp /= 2) cnt[0] += tmp;
	tmp = n;
	while (tmp /= 5) cnt[1] += tmp;
	tmp = m;
	while (tmp /= 2) cnt[0] -= tmp;
	tmp = m;
	while (tmp /= 5) cnt[1] -= tmp;
	tmp = n - m;
	while (tmp /= 2) cnt[0] -= tmp;
	tmp = n - m;
	while (tmp /= 5) cnt[1] -= tmp;

	cout << min(cnt[0], cnt[1]);

	return 0;
}