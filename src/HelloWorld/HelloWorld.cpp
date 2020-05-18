#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
	dat[tail++] = x;
}

void pop() {
	head++;
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail - 1];
}

void test() {
	
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	test();

	return 0;
}