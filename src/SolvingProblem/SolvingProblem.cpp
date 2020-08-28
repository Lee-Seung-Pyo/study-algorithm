#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l, c;
	cin >> l >> c;
	char C[15] = {};
	for (int i = 0; i < c; i++) cin >> C[i];
	sort(C, C + c);
	vector<bool> select(l, 1);
	select.insert(select.end(), c - l, 0);

	string vowel = "aeiou";
	do {
		int vcnt = 0;
		string result = "";
		for (int i = 0; i < c; i++) {
			if (!select[i]) continue;
			if (vowel.find(C[i]) != -1) vcnt++;
			result += C[i];
		}
		if (vcnt && vcnt < l - 1) cout << result << endl;
	} while (prev_permutation(select.begin(), select.end()));
	return 0;
}