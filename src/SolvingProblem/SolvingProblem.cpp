#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int i = 0;
	for (; i * i <= n; i++);
	cout << i - 1;

	return 0;
}