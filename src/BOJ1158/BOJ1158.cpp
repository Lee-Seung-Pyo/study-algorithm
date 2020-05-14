#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Node {
	Node* nxt;
	int dat;
};

Node dummy;
Node* cur = &dummy;
Node* pre = nullptr;

void push_back(int i) {
	Node* add = new Node;
	add->dat = i;
	add->nxt = cur->nxt;
	cur->nxt = add;
	cur = add;
}

void erase() {
	pre->nxt = cur->nxt;
	delete cur;
	cur = pre->nxt;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	dummy.dat = 0;
	dummy.nxt = nullptr;
	//1~n 삽입
	for (int i = 1; i <= n; i++) {
		push_back(i);
	}
	cur->nxt = dummy.nxt;  //n번째-첫번째 이어주기
	pre = cur;
	cur = cur->nxt; //첫번째로 커서이동
	cout << "<";
	while (cur->nxt != cur) {
		for (int i = 0; i < k - 1; i++) {
			pre = cur;
			cur = cur->nxt;
		}
		cout << cur->dat << ", ";
		erase();
	}
	cout << cur->dat << ">";

	return 0;
}