#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	stack<int> s;
	long long ans(0);
	while (n--) {
		int h;
		cin >> h;
		while (!s.empty() && h >= s.top()) s.pop();
		ans += s.size();
		s.push(h);
	}
	cout << ans;
	return 0;
}