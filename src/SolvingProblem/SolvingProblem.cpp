#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int t[1000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, w, L;
	cin >> n >> w >> L;
	for (int i = 0; i < n; i++) cin >> t[i];
	queue<int> q;
	for (int i = 0; i < w; i++) q.push(0);
	int idx = 0, sec = 0;
	while (idx < n) {
		sec++;
		int leave = q.front(); q.pop();
		L += leave;
		if (L - t[idx] < 0) q.push(0);
		else {
			q.push(t[idx]);
			L -= t[idx++];
		}
	}
	cout << sec + w;

	return 0;
}