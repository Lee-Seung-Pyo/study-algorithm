#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int arr[12];
int c[12] = { 1,1,1,1,1,1, };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true) {
		int k;
		cin >> k;
		if (k == 0) return 0;
		for (int i = 0; i < k; i++) cin >> arr[i];
		do {
			for (int i = 0; i < k; i++) {
				if (c[i]) cout << arr[i] << ' ';
			}
			cout << endl;
		} while (prev_permutation(c, c + k));
		cout << endl;
	}
	return 0;
}