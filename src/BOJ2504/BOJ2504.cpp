#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

stack<int> st;

void insertNumber(int x) {
	if(!st.empty() && st.top() > 0) {
		x += st.top();
		st.pop();
	}
	st.push(x);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	bool isError = false;
	for (auto c : s) {
		if (c == '(') st.push(-2);
		else if (c == '[') st.push(-3);
		else if (c == ')') {
			if (st.empty() || st.top() == -3) {
				isError = true;
				break;
			}
			if (st.top() == -2) {  // () �� ���: 2�� �־���
				st.pop();
				insertNumber(2);
			}
			else {  // top�� ������ ���: ����*2�� �־���
				int tmp = st.top();
				st.pop();
				if (st.empty() || st.top() == -3) {
					isError = true;
					break;
				}
				st.pop();
				insertNumber(tmp * 2);
			}
		}
		else if (c == ']') {
			if (st.empty() || st.top() == -2) {
				isError = true;
				break;
			}
			if (st.top() == -3) {  // [] �� ���: 3�� �־���
				st.pop();
				insertNumber(3);
			}
			else {  // top�� ������ ���: ����*3�� �־���
				int tmp = st.top();
				st.pop();
				if (st.empty() || st.top() == -2) {
					isError = true;
					break;
				}
				st.pop();
				insertNumber(tmp * 3);
			}
		}
	}
	if (isError || st.size() > 1 || st.top() < 0) cout << 0;
	else cout << st.top();
	return 0;
}