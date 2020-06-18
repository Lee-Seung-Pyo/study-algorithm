#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int outdeg[100001];
int vis[100001];  // 0: 방문안함, 1: 현재방문중, 2: 팀없음, 3: 팀있음

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> outdeg[i];
		queue<int> q;
		for (int i = 1; i <= n; i++) {
			if (vis[i]) continue;
			int nxt = i;
			while (!vis[nxt]) {
				q.push(nxt);
				vis[nxt] = 1;
				nxt = outdeg[nxt];
			}
			if (vis[nxt] == 1) { // 서클 찾음
				int flag = 0;
				while (!q.empty()) {
					int cur = q.front(); q.pop();
					if (cur == nxt) flag = 1;
					if (!flag) vis[cur] = 2;
					else vis[cur] = 3;
				}
			}
			else { // vis[nxt] == 2 or 3
				while (!q.empty()) {
					int cur = q.front(); q.pop();
					vis[cur] = 2;
				}
			}
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (vis[i] == 2) cnt++;
			vis[i] = 0;
		}
		cout << cnt << endl;
	}

	return 0;
}