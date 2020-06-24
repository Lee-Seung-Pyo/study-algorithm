#include <bits/stdc++.h>
#define endl '\n'
#define X_MAX 1000
using namespace std;

vector<bool> isPrime(X_MAX + 1, true);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	isPrime[1] = false;
	for (int i = 2; i * i <= X_MAX; i++) {
		if (!isPrime[i]) continue;
		for (int j = i * i; j <= X_MAX; j += i) isPrime[j] = false;
	}
	int n;
	cin >> n;
	int cnt = 0;
	while (n--) {
		int x;
		cin >> x;
		if (isPrime[x]) cnt++;
	}
	cout << cnt;

	return 0;
}