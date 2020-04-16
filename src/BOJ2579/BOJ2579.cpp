#include <iostream>
#include <algorithm>

#define endl '\n'
#define MAX_N 300

using namespace std;

int main() {
	int n;
	int scoreArr[MAX_N+1] = { 0 };
	cin >> n;
	for (int i = 1; i < n+1; i++) {
		cin >> scoreArr[i];
	}

	int dp[MAX_N + 1] = { 0 };  // n번 계단까지 올랐을 때 최대 점수
	dp[0] = 0;
	dp[1] = scoreArr[1];
	dp[2] = scoreArr[2] + scoreArr[1];
	for (int i = 3; i < n + 1; i++) {
		dp[i] = max(dp[i - 2] + scoreArr[i], dp[i - 3] + scoreArr[i - 1] + scoreArr[i]);
	}

	cout << dp[n] << endl;

	return 0;
}