#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x;
	cin >> x;
	while (--n) {
		int y;
		cin >> y;
		int d = gcd(x, y);
		cout << x / d << '/' << y / d << endl;
	}

	return 0;
}