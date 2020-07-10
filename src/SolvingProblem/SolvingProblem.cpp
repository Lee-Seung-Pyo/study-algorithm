#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int e, s, m;
	cin >> e >> s >> m;
	int te = 1, ts = 1, tm = 1, year = 1;
	while (te != e || ts != s || tm != m) {
		te = te % 15 + 1;
		ts = ts % 28 + 1;
		tm = tm % 19 + 1;
		year++;
	}
	cout << year;

	return 0;
}