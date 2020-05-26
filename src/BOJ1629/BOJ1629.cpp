#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long a, b, c;

long long recursion(int tmpb) {
	if (tmpb == 1) return a % c;
	long long tmp = recursion(tmpb / 2);
	int cur = tmpb % 2;
	if (cur) return a * tmp % c * tmp % c; //È¦¼ö
	else return tmp * tmp % c; //Â¦¼ö
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b >> c;
	// ½ºÅÃ »ç¿ë
	stack<int> s;
	while (b > 1) {
		s.push(b % 2);
		b /= 2;
	}
	long long ans(a % c);
	while (!s.empty()) {
		int cur = s.top();
		s.pop();
		if (cur) ans = a * ans % c * ans % c; //È¦¼ö
		else ans = ans * ans % c; //Â¦¼ö
	}
	cout << ans;
	
	// Àç±ÍÇÔ¼ö »ç¿ë
	//cout << recursion(b);

	return 0;
}