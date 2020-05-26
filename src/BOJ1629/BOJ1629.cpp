#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long a, b, c;

long long recursion(int tmpb) {
	if (tmpb == 1) return a % c;
	long long tmp = recursion(tmpb / 2);
	int cur = tmpb % 2;
	if (cur) return a * tmp % c * tmp % c; //Ȧ��
	else return tmp * tmp % c; //¦��
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b >> c;
	// ���� ���
	stack<int> s;
	while (b > 1) {
		s.push(b % 2);
		b /= 2;
	}
	long long ans(a % c);
	while (!s.empty()) {
		int cur = s.top();
		s.pop();
		if (cur) ans = a * ans % c * ans % c; //Ȧ��
		else ans = ans * ans % c; //¦��
	}
	cout << ans;
	
	// ����Լ� ���
	//cout << recursion(b);

	return 0;
}