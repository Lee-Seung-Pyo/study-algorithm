#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> failure(string& S) {
	vector<int> f(S.size(), 0);
	int j = 0;
	for (int i = 1; i < S.size(); i++) {
		while (j > 0 && S[j] != S[i]) j = f[j - 1];
		if (S[j] == S[i]) f[i] = ++j;
	}
	return f;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string T, P;
	getline(cin, T);
	getline(cin, P);
	vector<int> f = failure(P);
	int j = 0;
	vector<int> occur;
	for (int i = 0; i < T.size(); i++) {
		while (j > 0 && T[i] != P[j]) j = f[j - 1];
		if (T[i] == P[j]) j++;
		if (j == P.size()) {
			occur.push_back(i - j + 2);
			j = f[j - 1];
		}
	}
	cout << occur.size() << endl;
	for (auto e : occur) cout << e << ' ';

	return 0;
}