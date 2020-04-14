#include <iostream>
#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX_N 25
using namespace std;

int n;
int nMap[MAX_N + 2][MAX_N + 2] = { 0 };  // 상하좌우 1씩 버퍼
int x[4] = { 0,0,-1,1 };  // 상하좌우
int y[4] = { 1,-1,0,0 };  //
vector<int> vCnt;  // 단지내 집의 수 저장

void bfs(int my, int mx) {
	queue<pair<int, int>> q;
	int cnt(0);
	q.push(pair<int, int>(my, mx));
	nMap[my][mx] = 0;
	cnt++;

	while (!q.empty()) {
		pair<int, int> tmp = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			pair<int, int> nNext(tmp.first + y[i], tmp.second + x[i]);
			if (nMap[nNext.first][nNext.second] == 1) {
				q.push(nNext);
				nMap[nNext.first][nNext.second] = 0;
				cnt++;
			}
		}

	}

	vCnt.push_back(cnt);
}

int main() {
	// input
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf_s("%1d", &nMap[i + 1][j + 1]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (nMap[i + 1][j + 1] == 1) bfs(i + 1, j + 1);
		}
	}

	cout << vCnt.size() << endl;
	sort(vCnt.begin(), vCnt.end());
	for (auto k : vCnt) {
		cout << k << endl;
	}

	return 0;
}