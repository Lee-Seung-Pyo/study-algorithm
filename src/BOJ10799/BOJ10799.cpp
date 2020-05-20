#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	stack<char> st;
	char prev = NULL;
	int ans = 0;
	for (auto c : s) {
		if (c == '(') {
			st.push('(');
			prev = '(';
		}
		else if (prev == '(') {  // 레이저
			st.pop();
			prev = ')';
			ans += st.size();
		}
		else {  // 쇠막대기 끝남
			st.pop();
			prev = ')';
			ans++;
		}
	}
	cout << ans;

	return 0;
}