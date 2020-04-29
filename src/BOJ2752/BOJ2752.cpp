#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	int arr[3]{ 0 };
	for (auto& e : arr) {
		cin >> e;
	}
	sort(arr,arr+3);
	for (auto e : arr) {
		cout << e << " ";
	}
	return 0;
}