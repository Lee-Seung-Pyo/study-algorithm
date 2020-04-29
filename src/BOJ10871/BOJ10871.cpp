#include <iostream>

#define endl '\n'

using namespace std;

int main() {
	ios::sync_with_stdio(0);  // stdio 출력버퍼와 싱크 해제
	cin.tie(0);  // cin명령을 수행하기 전에 cout버퍼를 비우지 않음
	int N, X;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (input < X) cout << input << " ";
	}

	return 0;
}