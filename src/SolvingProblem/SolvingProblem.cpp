#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> tri[500];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			int input;
			cin >> input;
			tri[i].push_back(input);
		}
	}
	for (int i = 1; i < n; i++) {
		tri[i][0] += tri[i - 1][0];
		for (int j = 1; j < i; j++) {
			tri[i][j] += max(tri[i - 1][j - 1], tri[i - 1][j]);
		}
		tri[i][i] += tri[i - 1][i - 1];
	}
	int mx = 0;
	for (auto e : tri[n - 1]) mx = max(mx, e);
	cout << mx;

	return 0;
}