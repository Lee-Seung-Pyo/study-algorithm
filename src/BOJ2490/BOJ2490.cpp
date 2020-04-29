#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	char arr[5]{ 'D', 'C', 'B', 'A', 'E' };
	for (int i = 0; i < 3; i++) {
		int sum(0);
		for (int j = 0; j < 4; j++) {
			int tmp;
			cin >> tmp;
			sum += tmp;
		}
		cout << arr[sum] << endl;
	}

	return 0;
}