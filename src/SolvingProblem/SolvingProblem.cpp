#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int adj[100][100];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> adj[i][j];
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (!adj[i][j] && adj[i][k] && adj[k][j]) adj[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << adj[i][j] << ' ';
		cout << endl;
	}

	return 0;
}