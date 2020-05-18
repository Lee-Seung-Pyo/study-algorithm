#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<int> s;
	int n;
	cin >> n;
	int cur = 1;
	vector<char> v;
	while (n--) {
		int input;
		cin >> input;
		if (input >= cur) {
			while (cur <= input) {
				v.push_back('+');
				s.push(cur++);
			}
			v.push_back('-');
			s.pop();
		}
		else if (s.top() == input) {
			v.push_back('-');
			s.pop();
		}
		else {
			cout << "NO" << endl;
			return 0;
		}
	}
	for (auto e : v) cout << e << endl;

	return 0;
}