#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string op;
		cin >> op;
		int n;
		cin >> n;
		deque<int> dq;
		// 이렇게 하니까 메모리초과 뜸. cin을 이렇게 반복해서 받으면 안되는 듯.
		//char _;
		//cin >> _;
		//while (n--) {
		//	int e;
		//	cin >> e >> _;
		//	dq.push_back(e);
		//}
		string arr;
		cin >> arr;
		stringstream ss;
		ss.str(arr);
		char _;
		while (ss>>_) {
			int e;
			if(ss>>e) dq.push_back(e);
		}
		bool asc = true;
		bool isError = false;
		for (auto c : op) {
			if (c == 'R') asc = !asc;  // R 
			else if (dq.empty()) {  // D인데 비어있음
				isError = true;
				cout << "error" << endl;
				break;
			}
			else if (asc) dq.pop_front();  // D: 앞에서 지움
			else dq.pop_back();  // D: 뒤에서 지움
		}
		if (isError);
		else if (dq.empty()) {
			cout << "[]" << endl;
			continue;
		}
		else if (asc) {  // 앞에서부터 출력
			cout << '[';
			while (dq.size() > 1) {
				cout << dq.front() << ',';
				dq.pop_front();
			}
			cout << dq.front() << ']' << endl;
		}
		else {  // 뒤에서부터 출력
			cout << '[';
			while (dq.size() > 1) {
				cout << dq.back() << ',';
				dq.pop_back();
			}
			cout << dq.back() << ']' << endl;
		}
	}
	return 0;
}