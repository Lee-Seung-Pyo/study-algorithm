#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	if (a < b) {
		cout << b - a - 1 << endl;
		for (a++; a < b; a++) cout << a << ' ';
	}
	else if (b < a) {
		cout << a - b - 1 << endl;
		for (b++; b < a; b++) cout << b << ' ';
	}
	else {
		cout << 0;
	}
	return 0;
}