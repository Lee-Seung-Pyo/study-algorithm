//½Ã°£: 6ºÐ
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		stack<char> st;
		string ans = "YES";
		for (auto c : s) {
			if (c == '(') st.push(c);
			else if (st.empty()) {
				ans = "NO";
				break;
			}
			else st.pop();
		}
		if (!st.empty()) ans = "NO";
		cout << ans << endl;
	}

	return 0;
}