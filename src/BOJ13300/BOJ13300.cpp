#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int arr[2][6] = { 0 };
	int cnt(0);
	while (n--) {
		int s, y;
		cin >> s >> y;
		arr[s][y-1]++;
		if (arr[s][y - 1] == 1) cnt++;
		arr[s][y - 1] %= k;
	}
	cout << cnt;

	return 0;
}