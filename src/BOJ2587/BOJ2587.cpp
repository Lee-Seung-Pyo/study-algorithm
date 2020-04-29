#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[5]{ 0 };
	for (auto& e : arr) cin >> e;
	sort(arr, arr + 5);
	int sum(0);
	for (auto e : arr) {
		sum += e;
	}
	cout << sum / 5 << endl;
	cout << arr[2] << endl;

	return 0;
}