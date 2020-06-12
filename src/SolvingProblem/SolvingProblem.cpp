#include <bits/stdc++.h>
#define endl '\n'
#define INF 1'000'000'000
using namespace std;

vector<pair<int, int>> adj[1001];
int d[1001];
int pre[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back({ b,c });
	}
	int st, en;
	cin >> st >> en;
	fill(d, d + n + 1, INF);
	d[st] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ d[st], st });
	while (!pq.empty()) {
		auto cur = pq.top(); pq.pop();
		int dist = cur.first, idx = cur.second;
		if (d[idx] != dist) continue;
		for (auto e : adj[idx]) {
			int nidx = e.first, cost = e.second;
			if (d[nidx] > d[idx] + cost) {
				d[nidx] = d[idx] + cost;
				pq.push({ d[nidx], nidx });
				pre[nidx] = idx;
			}
		}
	}
	cout << d[en] << endl;
	vector<int> path;
	int cur = en;
	while (cur != st) {
		path.push_back(cur);
		cur = pre[cur];
	}
	path.push_back(st);
	cout << path.size() << endl;
	for (int i = path.size()-1; i >= 0; i--) cout << path[i] << ' ';

	return 0;
}