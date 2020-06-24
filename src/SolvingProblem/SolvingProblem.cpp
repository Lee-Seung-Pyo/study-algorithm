#include <bits/stdc++.h>
#define endl '\n'
#define X_MAX 1000
using namespace std;

int main() {
	auto start = clock();
	ios::sync_with_stdio(0);
	cin.tie(0);
	int st, en;
	cin >> st >> en;
	if (st == 1) st = 2;
	for (int i = st; i <= en; i++) {
		bool isPrime = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j) continue;
			isPrime = false;
			break;
		}
		if (isPrime) cout << i << endl;
	}
	auto end = clock();
	cout << end - start << endl;
	return 0;
}