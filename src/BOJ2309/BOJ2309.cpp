#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int freq[101]{ 0 };
	int sum(0);
	for (int i = 0; i < 9; i++) {
		int input;
		cin >> input;
		freq[input] = 1;
		sum += input;
	}
	for (int i = 1; i < 101; i++) {
		if (sum - i - 100 < 0 || sum - i - 100 > 100) continue;
		if (freq[i] && freq[sum - i - 100]) {
			freq[i] = 0;
			freq[sum - i - 100] = 0;
			break;
		}
	}
	for (int i = 1; i < 101; i++) {
		if (freq[i]) cout << i << endl;
	}

	return 0;
}