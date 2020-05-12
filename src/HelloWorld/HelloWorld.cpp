#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int func(int arr[], int N) {
	int occur[101] = { 0 };
	for (int i = 0; i < N; i++) {
		if (occur[100 - arr[i]]) return 1;
		occur[arr[i]] = 1;
	}
	return 0;
}

int main() {
	int arr[4] = { 4,13,63,87 };
	cout << func(arr, 4);

	return 0;
}