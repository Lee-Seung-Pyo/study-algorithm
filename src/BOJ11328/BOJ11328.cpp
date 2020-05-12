#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string s1;
		string s2;
		cin >> s1 >> s2;

		//1. 정렬해서 비교하기 O(NlogN) (N: 문자열 길이)
		//sort(s1.begin(), s1.end());
		//sort(s2.begin(), s2.end());
		//if (s1 == s2) cout << "Possible" << endl;
		//else cout << "Impossible" << endl;

		//2. hash 배열에 넣어서 비교하기 O(N)
		int arr[30] = { 0 };
		for (auto c : s1) {
			arr[c - 'a']++;
		}
		for (auto c : s2) {
			arr[c - 'a']--;
		}
		bool flag = true;
		for (auto e : arr) {
			if (e) {
				flag = false;
			}
		}
		if (flag) cout << "Possible" << endl;
		else cout << "Impossible" << endl;
	}

	return 0;
}