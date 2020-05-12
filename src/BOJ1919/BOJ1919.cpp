#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	int occur[30]{};
	for (auto c : s1) occur[c - 'a']++;
	for (auto c : s2) occur[c - 'a']--;
	int cnt(0);
	for (auto e : occur) {
		cnt += abs(e);
	}
	cout << cnt;

	return 0;
}