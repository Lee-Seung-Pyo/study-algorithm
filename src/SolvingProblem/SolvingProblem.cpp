#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v[1005];
int vis[1005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	queue<int> q;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (vis[i]) continue;
		cnt++;
		q.push(i);
		vis[i] = 1;
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (auto e : v[cur]) {
				if (vis[e]) continue;
				q.push(e);
				vis[e] = 1;
			}
		}
	}
	cout << cnt;

	return 0;
}