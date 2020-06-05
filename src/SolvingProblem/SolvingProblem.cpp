#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;
int a[500000];

int lower_idx(int target) {
	int st = 0;
	int en = n;
	while (st != en) {
		int mid = (st + en) / 2;
		if (a[mid] < target) st = mid + 1;
		else en = mid;
	}
	return st;
}

int upper_idx(int target) {
	int st = 0;
	int en = n;
	while (st != en) {
		int mid = (st + en) / 2;
		if (a[mid] <= target) st = mid + 1;
		else en = mid;
	}
	return st;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int m;
	cin >> m;
	while (m--) {
		int target;
		cin >> target;
		cout << upper_idx(target) - lower_idx(target) << ' ';
	}

	return 0;
}