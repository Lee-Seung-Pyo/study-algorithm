#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MX = 10005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos++] = x;
}

void pop() {
	if (pos) cout << dat[--pos] << endl;
	else cout << -1 << endl;
}

void size() {
	cout << pos << endl;
}

void empty() {
	cout << !pos << endl;
}

void top() {
	if (pos) cout << dat[pos - 1] << endl;
	else cout << -1 << endl;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		string op;
		cin >> op;
		if (op == "push") {
			int param;
			cin >> param;
			push(param);
		}
		else if (op == "pop") {
			pop();
		}
		else if (op == "size") {
			size();
		}
		else if (op == "empty") {
			empty();
		}
		else {
			top();
		}
	}

	return 0;
}