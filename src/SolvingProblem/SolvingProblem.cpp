#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string S, s;
	getline(cin, S);
	getline(cin, s);
	int ans = 0;
	for (int i = 0; i < S.size(); i++) {
		int is_matching = true;
		for (int j = 0; j < s.size(); j++) {
			if (S[i + j] != s[j]) {
				is_matching = false;
				break;
			}
		}
		if (is_matching) {
			ans++;
			i += s.size() - 1;
		}
	}
	cout << ans;

	return 0;
}