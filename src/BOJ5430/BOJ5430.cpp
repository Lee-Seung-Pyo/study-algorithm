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
		// �̷��� �ϴϱ� �޸��ʰ� ��. cin�� �̷��� �ݺ��ؼ� ������ �ȵǴ� ��.
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
			else if (dq.empty()) {  // D�ε� �������
				isError = true;
				cout << "error" << endl;
				break;
			}
			else if (asc) dq.pop_front();  // D: �տ��� ����
			else dq.pop_back();  // D: �ڿ��� ����
		}
		if (isError);
		else if (dq.empty()) {
			cout << "[]" << endl;
			continue;
		}
		else if (asc) {  // �տ������� ���
			cout << '[';
			while (dq.size() > 1) {
				cout << dq.front() << ',';
				dq.pop_front();
			}
			cout << dq.front() << ']' << endl;
		}
		else {  // �ڿ������� ���
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