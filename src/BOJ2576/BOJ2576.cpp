#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	int sum(0);
	int minval(INT_MAX);
	for (int i = 0; i < 7; i++) {
		int input;
		cin >> input;
		if (input % 2) {
			sum += input;
			minval = min(minval, input);
		}
	}
	if (sum == 0) cout << -1;
	else {
		cout << sum << endl;
		cout << minval << endl;
	}

	return 0;
}