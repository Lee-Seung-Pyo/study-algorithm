#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m;
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;
vector<bool> is_closed;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			if (x == 0) continue;
			if (x == 1) house.push_back({ i,j });
			else { // x == 2
				chicken.push_back({ i,j });
				is_closed.push_back(--m < 0);
			}
		}
	}
	int ans = INT_MAX;
	do {
		int sum = 0;
		for (auto h : house) {
			int x = h.first, y = h.second;
			int unit_dist = INT_MAX;
			for (int i = 0; i < chicken.size(); i++) {
				if (is_closed[i]) continue;
				int cx = chicken[i].first, cy = chicken[i].second;
				unit_dist = min(unit_dist, abs(cx - x) + abs(cy - y));
			}
			sum += unit_dist;
		}
		ans = min(ans, sum);
	} while (next_permutation(is_closed.begin(), is_closed.end()));
	cout << ans;

	return 0;
}