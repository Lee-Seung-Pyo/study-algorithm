#include <iostream>

#define endl '\n'
#define MAX_N 40

using namespace std;

int fiboArr[MAX_N + 1] = { 0 };

void fibonacci(int param) {
	fiboArr[0] = 0;
	fiboArr[1] = 1;
	for (int i = 2; i < param + 1; i++) {
		fiboArr[i] = fiboArr[i - 1] + fiboArr[i - 2];
	}
}

int main() {
	int t, n;
	cin >> t;
	fibonacci(MAX_N);
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n == 0) cout << "1 0" << endl;
		else cout << fiboArr[n - 1] << ' ' << fiboArr[n] << endl;
	}

	return 0;
}