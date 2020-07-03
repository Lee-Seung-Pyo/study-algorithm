#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int arr[1001] = { 1,1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2] * 2) % 10007;
	}
	cout << arr[n];

	return 0;
}