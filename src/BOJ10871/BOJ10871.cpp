#include <iostream>

#define endl '\n'

using namespace std;

int main() {
	ios::sync_with_stdio(0);  // stdio ��¹��ۿ� ��ũ ����
	cin.tie(0);  // cin����� �����ϱ� ���� cout���۸� ����� ����
	int N, X;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (input < X) cout << input << " ";
	}

	return 0;
}