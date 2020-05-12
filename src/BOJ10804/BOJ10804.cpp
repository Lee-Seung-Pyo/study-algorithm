#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	vector<int> arr(20);
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++) {
		int a, b;
		cin >> a >> b;
		reverse(&arr[0] + a - 1, &arr[0] + b);
	}
	for (auto e : arr) cout << e << ' ';
	return 0;
}