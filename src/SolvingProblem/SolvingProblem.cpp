#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> adj[32005];
int indeg[32005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		indeg[y]++;
	}
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (indeg[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cout << cur << ' ';
		for (auto e : adj[cur]) {
			indeg[e]--;
			if (indeg[e] == 0) q.push(e);
		}
	}

	return 0;
}