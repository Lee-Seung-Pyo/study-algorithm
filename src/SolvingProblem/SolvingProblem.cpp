#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

set< string, greater<string> > s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		string name, state;
		cin >> name >> state;
		if (state == "enter") s.insert(name);
		else s.erase(name);
	}
	for (auto e : s) {
		cout << e << endl;
	}

	return 0;
}