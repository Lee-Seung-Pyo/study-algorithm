#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> adj[501];
vector<bool> vis(501, false);

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
	queue<pair<int, int>> q;
	q.push({ 1,0 });
	vis[1] = true;
	int cnt = -1;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		int x = cur.first, dist = cur.second;
		if (dist >= 3) break;
		cnt++;
		for (auto nxt : adj[x]) {
			if (vis[nxt]) continue;
			q.push({ nxt,dist + 1 });
			vis[nxt] = true;
		}
	}
	cout << cnt;


	return 0;
}