#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> adj[20001];
vector<bool> vis(20001, false);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	while (m--) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	queue<pair<int, int>> q; //node,dist
	q.push({ 1,0 });
	vis[1] = true;
	int dist = 0, cnt = 1, ni = 1;
	while (!q.empty()) {
		int cur_n, cur_d;
		tie(cur_n, cur_d) = q.front(); q.pop();
		if (dist == cur_d) {
			ni = min(ni, cur_n);
			cnt++;
		}
		else {
			dist = cur_d;
			ni = cur_n;
			cnt = 1;
		}
		for (auto e : adj[cur_n]) {
			if (vis[e]) continue;
			q.push({ e, cur_d + 1 });
			vis[e] = true;
		}
	}
	cout << ni << ' ' << dist << ' ' << cnt;

	return 0;
}