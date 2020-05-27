#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, r, c;
	cin >> N >> r >> c;
	stack<int> s;
	int tmpN(N);
	int tmpR(r);
	int tmpC(c);
	while (tmpN) {
		int powN = pow(2, tmpN - 1);
		if (tmpR < powN) {
			if (tmpC < powN) s.push(0);
			else {
				s.push(1);
				tmpC -= powN;
			}
		}
		else {
			tmpR -= powN;
			if (tmpC < powN) {
				s.push(2);
			}
			else {
				s.push(3);
				tmpC -= powN;
			}
		}
		tmpN--;
	}
	tmpN = 1;
	int ans(0);
	while (!s.empty()) {
		int l = s.top(); s.pop();
		ans += l * pow(4, tmpN - 1);
		tmpN++;
	}
	cout << ans;
	return 0;
}