#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> adj[100'001];
int par[100'001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	queue<int> q;
	q.push(1);
	par[1] = -1;
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		for (auto nxt : adj[cur]) {
			if (par[nxt]) continue;
			q.push(nxt);
			par[nxt] = cur;
		}
	}
	for (int i = 2; i <= n; i++) cout << par[i] << endl;

	return 0;
}