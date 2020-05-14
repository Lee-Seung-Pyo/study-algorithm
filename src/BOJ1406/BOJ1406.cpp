#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

//////////////////////////////////////////
//2.야매연결리스트 사용 - STL 못쓸때
//const int MX = 600005;
//char dat[MX];
//int pre[MX];
//int nxt[MX];
//int unused = 1;
//int cur = 0;
//
//void traverse() {
//	int cur = nxt[0];
//	while (cur != -1) {
//		cout << dat[cur];
//		cur = nxt[cur];
//	}
//}
//
//void insert(int addr, char c) {
//	dat[unused] = c;
//	pre[unused] = addr;
//	nxt[unused] = nxt[addr];
//	nxt[addr] = unused;
//	if (nxt[unused] != -1) pre[nxt[unused]] = unused;
//	unused++;
//}
//
//void erase(int addr) {
//	nxt[pre[addr]] = nxt[addr];
//	if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
//}
/////////////////////////////////////////////

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//1.list 사용
	list<char> L;
	string s;
	cin >> s;
	for (auto c : s) L.push_back(c);
	auto cur = L.end();
	int n;
	cin >> n;
	while (n--) {
		char oper;
		cin >> oper;
		if (oper == 'L') {
			if (cur != L.begin()) cur--;
		}
		else if (oper == 'D') {
			if (cur != L.end()) cur++;
		}
		else if (oper == 'B') {
			if (cur != L.begin()) cur = L.erase(--cur);
		}
		else {
			char c;
			cin >> c;
			L.insert(cur, c);
		}
	}
	for (auto c : L) cout << c;

	//2.야매연결리스트 사용 - STL 못쓸때
	//fill(pre, pre + MX, -1);
	//fill(nxt, nxt + MX, -1);
	//string s;
	//cin >> s;
	//for (auto c : s) {
	//	insert(cur, c);
	//	cur = nxt[cur];
	//}
	//int n;
	//cin >> n;
	//while (n--) {
	//	char oper;
	//	cin >> oper;
	//	if (oper == 'L') {
	//		if (pre[cur] != -1) cur = pre[cur];
	//	}
	//	else if (oper == 'D') {
	//		if (nxt[cur] != -1) cur = nxt[cur];
	//	}
	//	else if (oper == 'B') {
	//		if (pre[cur] != -1) {
	//			erase(cur);
	//			cur = pre[cur];
	//		}
	//	}
	//	else {
	//		char c;
	//		cin >> c;
	//		insert(cur, c);
	//		cur = nxt[cur];
	//	}
	//}
	//traverse();

	return 0;
}