#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

pair<int, int> f[100001];
int mtod[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int st_m, st_d, en_m, en_d;
		cin >> st_m >> st_d >> en_m >> en_d;
		f[i] = { mtod[st_m - 1] + st_d, mtod[en_m - 1] + en_d };
	}
	sort(f, f + n);
	int cnt = 0, cur = 60, mx_en = 0, i = 0;
	bool flag = false;
	while (i < n) {
		int st = f[i].first, en = f[i].second;
		if (st > cur) { // cur 날짜 최신화
			if (!flag) { // cur 날짜에 놓을 꽃이 하나도 없는 경우
				cout << 0;
				return 0;
			}
			cur = mx_en;
			cnt++;
			flag = false;
			if (cur > 334) {
				cout << cnt;
				return 0;
			}
			continue;
		}
		i++;
		if (en <= cur) continue;
		flag = true;
		mx_en = max(mx_en, en);
	}
	// i가 n이 되서 while문을 나오는 경우 - 아직 마지막 꽃을 정하지 못함
	if (mx_en <= 334) cout << 0;
	else cout << ++cnt;

	return 0;
}