#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v[101];
vector<bool> vis(101, false);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, e;
	cin >> n >> e;
	while (e--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	queue<int> q;
	q.push(1);
	vis[1] = true;
	int cnt = 0;
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		for (auto nxt : v[cur]) {
			if (vis[nxt]) continue;
			q.push(nxt);
			vis[nxt] = true;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}