#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<pair<int, int>> v;
	v.push_back({ 0,0 });
	v.push_back({ 1,0 });
	v.push_back({ 0,0 });
	v.push_back({ 0,1 });
	sort(v.begin(), v.end(), [](const pair<int, int>& l, const pair<int, int>& r) {
		return l.first * r.second < l.second * r.first;
		});
	for (auto e : v) cout << e.first << ' ' << e.second << endl;

	cout << 4 << endl;
	cout << "0 0" << endl;
	cout << "1 0" << endl;
	cout << "0 0" << endl;
	cout << "0 1" << endl;

	return 0;
}