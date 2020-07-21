#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int freq[500'001];
int arr[500'001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		freq[x]++;
	}
	int cur = 1;
	for (int i = 1; i <= 500'000; i++) {
		while (freq[i]--) arr[cur++] = i;
	}
	long long sum = 0;
	for (int i = 1; i <= n; i++) sum += abs(arr[i] - i);
	cout << sum;

	return 0;
}