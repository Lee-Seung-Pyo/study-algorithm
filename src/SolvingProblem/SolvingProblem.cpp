#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> outdeg[1001];
int indeg[1001];
vector<int> ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	while (m--) {
		int k;
		cin >> k;
		int pre;
		cin >> pre;
		while (--k) {
			int cur;
			cin >> cur;
			outdeg[pre].push_back(cur);
			indeg[cur]++;
			pre = cur;
		}
	}
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (indeg[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		ans.push_back(cur);
		for (auto nxt : outdeg[cur]) {
			if (--indeg[nxt]) continue;
			q.push(nxt);
		}
	}
	if (ans.size() != n) {
		cout << 0;
		return 0;
	}
	for (auto e : ans) cout << e << endl;

	return 0;
}