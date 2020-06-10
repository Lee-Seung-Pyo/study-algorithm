#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int lc[30];
int rc[30];

void preorder(int x) {
	cout << (char)(x + 'A');
	if(lc[x]) preorder(lc[x]);
	if(rc[x]) preorder(rc[x]);
}

void inorder(int x) {
	if (lc[x]) inorder(lc[x]);
	cout << (char)(x + 'A');
	if (rc[x]) inorder(rc[x]);
}

void postorder(int x) {
	if (lc[x]) postorder(lc[x]);
	if (rc[x]) postorder(rc[x]);
	cout << (char)(x + 'A');
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		char p, l, r;
		cin >> p >> l >> r;
		if (l != '.') lc[p - 'A'] = (int)(l - 'A');
		if (r != '.') rc[p - 'A'] = (int)(r - 'A');
	}
	preorder(0);
	cout << endl;
	inorder(0);
	cout << endl;
	postorder(0);

	return 0;
}