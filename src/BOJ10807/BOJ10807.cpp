#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[205] = { 0 };
	while (n--) {
		int i;
		cin >> i;
		arr[i + 100]++;
	}
	int v;
	cin >> v;
	cout << arr[v + 100];

	return 0;
}