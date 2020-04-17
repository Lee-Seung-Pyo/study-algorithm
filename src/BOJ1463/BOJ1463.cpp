#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 1000000

using namespace std;

int main() {
	int n;
	cin >> n;
	int* dp = new int[n+1] {0};
	for (int i = 2; i < n+1; i++) {
		dp[i] = min({ (i % 3 == 0) ? (dp[i / 3] + 1) : (INT_MAX), (i % 2 == 0) ? (dp[i / 2] + 1) : (INT_MAX), dp[i - 1] + 1 });
	}

	cout << dp[n] << endl;

	delete[] dp;

	return 0;
}