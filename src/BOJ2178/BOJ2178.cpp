#include <iostream>
#include <stdio.h>
#include <queue>

#define MAX_VAL 100

using namespace std;

int n, m;  // n은 행, m은 열
int mapArr[MAX_VAL + 2][MAX_VAL + 2] = { 0 };  // 1씩 버퍼
int cntArr[MAX_VAL + 2][MAX_VAL + 2] = { 0 };  // depth 세주는 배열
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

void bfs() {
	queue<pair<int, int>> q;
	q.push(make_pair(1, 1));
	mapArr[1][1] = 0;
	cntArr[1][1]++;

	while (mapArr[n][m] != 0) {
		auto tmp = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			if (mapArr[tmp.first + dx[i]][tmp.second + dy[i]] == 1) {
				q.push(make_pair(tmp.first + dx[i], tmp.second + dy[i]));
				mapArr[tmp.first + dx[i]][tmp.second + dy[i]] = 0;
				cntArr[tmp.first + dx[i]][tmp.second + dy[i]] = cntArr[tmp.first][tmp.second] + 1;
			}
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &mapArr[i + 1][j + 1]);
		}
	}

	bfs();

	cout << cntArr[n][m] << endl;

	return 0;
}