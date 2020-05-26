#include <bits/stdc++.h>
#define endl '\n'
#define X first
#define Y second
using namespace std;

int dist[100005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	if (N == K) {
		cout << 0;
		return 0;
	}
	fill(dist, dist + 100005, -1);
	queue<int> q;
	q.push(N);
	dist[N] = 0;
	int ans(0);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		if (cur - 1 == K || cur + 1 == K || cur * 2 == K) {
			ans = dist[cur] + 1;
			break;
		}
		if (cur - 1 >= 0 && dist[cur - 1] == -1) {
			q.push(cur - 1);
			dist[cur - 1] = dist[cur] + 1;
		}
		if (cur < K && cur + 1 <= 100000 && dist[cur + 1] == -1) {
			q.push(cur + 1);
			dist[cur + 1] = dist[cur] + 1;
		}
		if (cur < K && cur * 2 <= 100000 && dist[cur * 2] == -1) {
			q.push(cur * 2);
			dist[cur * 2] = dist[cur] + 1;
		}
	}
	cout << ans;

	return 0;
}