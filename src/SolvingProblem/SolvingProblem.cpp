#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<bool> is_prime(10000001, true);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b;
	cin >> a >> b;
	is_prime[0] = false;
	is_prime[1] = false;
	for (long long i = 2; i * i * i * i <= b; i++) {
		if (!is_prime[i]) continue;
		for (long long j = i * i; j * j <= b; j += i) is_prime[j] = false;
	}
	long long ans = 0;
	for (long long i = 2; i * i <= b; i++) {
		if (!is_prime[i]) continue;
		long long j = i;
		while (j <= b / i) {
			j *= i;
			if (j >= a) ans++;
		}
	}
	cout << ans;

	return 0;
}