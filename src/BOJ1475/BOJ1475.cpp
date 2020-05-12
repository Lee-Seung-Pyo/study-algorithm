#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	string s;
	cin >> s;
	int arr[9] = { 0 };
	for (auto c : s) {
		if (c == '9') c = '6';
		arr[c - '0']++;
	}
	arr[6] = (arr[6] + 1) / 2;
	cout << *max_element(arr, arr + 9);

	return 0;
}