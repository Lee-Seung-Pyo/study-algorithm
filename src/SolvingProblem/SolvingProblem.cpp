#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

pair<int, pair<int, int> > edge[100'005];
int par[10'005];

int find(int x) {
	if (par[x] < 0) return x;
	return par[x] = find(par[x]);
}

bool myUnion(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return 0;
	if (par[x] == par[y]) par[x]--;
	if (par[x] < par[y]) par[y] = x;
	else par[x] = y;
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int v, e;
	cin >> v >> e;
	fill(par, par + v + 1, -1);
	for (int i = 0; i < e; i++) {
		cin >> edge[i].second.first >> edge[i].second.second >> edge[i].first;
	}
	sort(edge, edge + e);
	int sum = 0;
	int cnt = 0;
	for (int i = 0; i < e; i++) {
		if (myUnion(edge[i].second.first, edge[i].second.second)) {
			sum += edge[i].first;
			cnt++;
		}
		if (cnt == v - 1) break;
	}
	cout << sum;

	return 0;
}