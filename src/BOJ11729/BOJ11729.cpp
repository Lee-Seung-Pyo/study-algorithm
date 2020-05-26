#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void hanoi(int tmpn, int start, int dest) {
	if (tmpn == 0) return;
	hanoi(tmpn - 1, start, 6 - start - dest);
	cout << start << ' ' << dest << endl;  // 목적에다 하나 옮김
	hanoi(tmpn - 1, 6 - start - dest, dest);
}

struct H {
	int tmpn;
	int start;
	int dest;
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int f[25] = { 0 };
	for (int i = 1; i <= n; i++) {
		f[i] = 2 * f[i - 1] + 1;
	}
	cout << f[n] << endl;

	//재귀함수
	//hanoi(n, 1, 3);

	//스택
	stack<H> s;
	s.push({ n,1,3 });
	while (!s.empty()) {
		while (1) {
			auto cur = s.top();
			if (cur.tmpn == 1) break;
			s.push({ cur.tmpn - 1, cur.start, 6 - cur.start - cur.dest });
		}
		auto cur = s.top();
		cout << cur.start << ' ' << cur.dest << endl;
		s.pop();
		if (s.empty()) break;
		cur = s.top();
		cout << cur.start << ' ' << cur.dest << endl;
		s.pop();
		if(cur.tmpn != 1) s.push({ cur.tmpn - 1, 6 - cur.start - cur.dest, cur.dest });
	}

	return 0;
}