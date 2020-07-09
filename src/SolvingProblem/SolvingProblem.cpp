#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int sqrt_n[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 1; i < 10; i++) fill(&sqrt_n[i * i], &sqrt_n[(i + 1) * (i + 1)], i);
	sqrt_n[100] = 10;
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		cout << sqrt_n[n] << endl;
	}

	return 0;
}