#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int num[11];
vector<int> oprtr; //0(+) 1(-) 2(*) 3(/)

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	for (int i = 0; i < 4; i++) {
		int cnt;
		cin >> cnt;
		while (cnt--) oprtr.push_back(i);
	}
	int mx = INT_MIN, mn = INT_MAX;
	do {
		int tmp = num[0];
		for (int i = 1; i < n; i++) {
			switch (oprtr[i - 1]) {
			case 0:
				tmp += num[i];
				break;
			case 1:
				tmp -= num[i];
				break;
			case 2:
				tmp *= num[i];
				break;
			case 3:
				tmp /= num[i];
				break;
			}
		}
		mx = max(mx, tmp);
		mn = min(mn, tmp);
	} while (next_permutation(oprtr.begin(), oprtr.end()));
	cout << mx << endl;
	cout << mn << endl;

	return 0;
}