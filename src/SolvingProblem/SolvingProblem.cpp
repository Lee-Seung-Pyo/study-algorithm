#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<string> v;
vector<string> ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	while (n--) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	auto st = v.begin();
	auto en = v.end();
	sort(st, en);
	while (m--) {
		string s;
		cin >> s;
		if (binary_search(st, en, s)) ans.push_back(s);
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for (auto s : ans) cout << s << endl;

	return 0;
}