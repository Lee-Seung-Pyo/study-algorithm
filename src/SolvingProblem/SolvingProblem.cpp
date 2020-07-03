#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int num[50];
char pm[50];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	stringstream ss(s);
	int n = 0;
	do ss >> num[n++];
	while (ss >> pm[n]);
	int ans = num[0];
	bool plus = true;
	for (int i = 1; i < n; i++) {
		if (pm[i] == '-') plus = false;
		if (plus) ans += num[i];
		else ans -= num[i];
	}
	cout << ans;

	return 0;
}