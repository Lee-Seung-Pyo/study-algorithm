#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		list<char> L;
		auto cur = L.end();
		for (auto c : s) {
			if (c == '<') {
				if (cur != L.begin()) cur--;
			}
			else if (c == '>') {
				if (cur != L.end()) cur++;
			}
			else if (c == '-') {
				if (cur != L.begin()) cur = L.erase(--cur);
			}
			else {
				L.insert(cur, c);
			}
		}
		for (auto c : L) cout << c;
		cout << endl;
	}

	return 0;
}