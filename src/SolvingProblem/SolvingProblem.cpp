#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> a;
vector<int> b;
vector<int> ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	while (n--) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	while (m--) {
		int x;
		cin >> x;
		b.push_back(x);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	auto st = b.begin();
	auto en = b.end();
	for (auto e : a) {
		if (!binary_search(st, en, e)) ans.push_back(e);
	}
	cout << ans.size() << endl;
	for (auto e : ans) cout << e << ' ';
	cout << endl;

	return 0;
}