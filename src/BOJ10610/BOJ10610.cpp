#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string szData;
	cin >> szData;
	sort(szData.begin(), szData.end(), greater<char>());

	int sum(0);
	for (auto i : szData) {
		sum += atoi(&i);
	}
	if (szData.back() == '0' && sum % 3 == 0) {
		cout << szData << endl;
	}
	else {
		cout << -1 << endl;
	}

	return 0;
}