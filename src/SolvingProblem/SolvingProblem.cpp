#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int arr[10000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];
	int sum = 0, cnt = 0;
	for (int st = 0, en = 0; en < n; en++) {
		sum += arr[en];
		while (sum > m) sum -= arr[st++];
		if (sum == m) cnt++;
	}
	cout << cnt;

	return 0;
}