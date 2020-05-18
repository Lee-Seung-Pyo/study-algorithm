#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos] = x;
	pos++;
}

void pop() {
	if (pos > 0) pos--;
}

int top() {
	if (pos == 0) return NULL;
	return dat[pos - 1];
}

void printArr() {
	for (int i = 0; i < pos; i++) cout << dat[i] << ' ';
	cout << endl;
}

void test() {
	push(10);
	printArr();
	push(20);
	printArr();
	push(30);
	printArr();
	pop();
	printArr();
	cout << top();
}

int main(void) {
	test();

	return 0;
}