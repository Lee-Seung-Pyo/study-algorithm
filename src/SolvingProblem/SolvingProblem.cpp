#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int L[29] = { 3 };

char recur(int x) {
	if (x == 1) return 'm';
	if (x <= 3) return 'o';
	int i = 1;
	for (; L[i] < x; i++);
	x -= L[i - 1];
	if (x == 1) return 'm';
	x -= i + 3;
	if (x <= 0) return 'o';
	return recur(x);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 1; i < 29; i++) L[i] = L[i - 1] * 2 + i + 3;
	int n;
	cin >> n;
	cout << recur(n);

	return 0;
}