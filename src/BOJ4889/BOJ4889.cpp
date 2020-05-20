#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t(1);
	while (1) {
		string s;
		cin >> s;
		if ((int)s.find('-') != -1) break;
		int sum(0);
		int ans(0);
		for (auto c : s) {
			if (c == '{') sum++;
			else if (sum == 0) {
				sum++;
				ans++;
			}
			else sum--;
		}
		ans += sum / 2;
		cout << t++ << ". " << ans << endl;
	}


	return 0;
}