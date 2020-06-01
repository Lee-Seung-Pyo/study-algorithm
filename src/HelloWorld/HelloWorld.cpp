#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(int a, int b) {
	if (a<b) return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[5] = { 5,3,1,4,2 };
	sort(a, a + 5, [](int a, int b) {
		if (a < b) return true;
		return false;
		});
	for (auto e : a) cout << e << ' ';

	return 0;
}