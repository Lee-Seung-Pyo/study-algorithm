#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

deque<int> dq;
int ans(0);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	while (m--) {
		int cnt1 = 0, cnt2 = 0;
		int target;
		cin >> target;
		deque<int> tmpDq = dq;
		while (dq.front() != target) { // 왼쪽으로 이동
			dq.push_back(dq.front());
			dq.pop_front();
			cnt1++;
		}
		dq.pop_front();
		while (tmpDq.front() != target) { // 오른쪽으로 이동
			tmpDq.push_front(tmpDq.back());
			tmpDq.pop_back();
			cnt2++;
		}
		tmpDq.pop_front();
		if (cnt1 <= cnt2) ans += cnt1;
		else {
			ans += cnt2;
			dq = tmpDq;
		}
	}
	cout << ans;

	return 0;
}