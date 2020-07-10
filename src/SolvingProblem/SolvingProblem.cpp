#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt_5 = 0, cnt_3 = 0;
	while (n >= 5) {
		n -= 5;
		cnt_5++;
	}
	while (n >= 3) {
		n -= 3;
		cnt_3++;
	}
	while (n) {
		if (cnt_5 == 0) {
			cout << -1;
			return 0;
		}
		cnt_5--;
		n += 5;
		while (n >= 3) {
			n -= 3;
			cnt_3++;
		}
	}
	cout << cnt_5 + cnt_3;

	return 0;
}