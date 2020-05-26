#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long test(int a, int b, int m) {
	long long val = 1;
	while (b--) val *= a;
	return val;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout << test(6, 12, 5);

	return 0;
}