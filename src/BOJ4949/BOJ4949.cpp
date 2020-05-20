#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		string s;
		getline(cin, s);
		if (s == ".") break;
		stack<char> st;
		string ans = "yes";
		for (auto c : s) {
			if (c == '(' || c=='[') st.push(c);
			else if (c == ')') {
				if (st.empty() || st.top() != '(') {
					ans = "no";
					break;
				}
				else st.pop();
			}
			else if (c == ']') {
				if (st.empty() || st.top() != '[') {
					ans = "no";
					break;
				}
				else st.pop();
			}
		}
		if (!st.empty()) ans = "no";
		cout << ans << endl;
	}

	return 0;
}