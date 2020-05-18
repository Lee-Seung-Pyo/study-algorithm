#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MX = 10005;
int dat[MX];
int head = 0, tail = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		string op;
		cin >> op;
		if (op == "push") {
			int x;
			cin >> x;
			dat[tail++] = x;
		}
		else if (op == "pop") {
			if (head == tail) cout << -1 << endl;
			else cout << dat[head++] << endl;
		}
		else if (op == "size") {
			cout << tail - head << endl;
		}
		else if (op == "empty") {
			cout << (head == tail) << endl;
		}
		else if (op == "front") {
			if (head == tail) cout << -1 << endl;
			else cout << dat[head] << endl;
		}
		else if (op == "back") {
			if (head == tail) cout << -1 << endl;
			else cout << dat[tail - 1] << endl;
		}
		else;
	}

	return 0;
}