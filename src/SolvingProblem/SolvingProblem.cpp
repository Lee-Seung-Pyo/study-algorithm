#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	cin >> x;
	if (x % 10) {
		cout << -1;
		return 0;
	}
	cout << x / 300 << ' ';
	x %= 300;
	cout << x / 60 << ' ';
	x %= 60;
	cout << x / 10;

	return 0;
}