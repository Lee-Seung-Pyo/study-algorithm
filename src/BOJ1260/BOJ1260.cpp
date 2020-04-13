#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

#define MAX_VALUE 1001

using namespace std;

int n, m, v;
bool graph[MAX_VALUE][MAX_VALUE] = { false };
bool visited[MAX_VALUE] = { 0 };

void dfs(int node) {
	cout << node << ' ';
	visited[node] = true;
	for (int i = 1; i < n + 1; i++) {
		if (graph[node][i] == true && visited[i] == false) dfs(i);
	}
}

void bfs(int node) {
	queue<int> q;
	q.push(node);
	visited[node] = true;
	while (!q.empty()) {
		int tmp = q.front();
		cout << tmp << ' ';
		q.pop();
		for (int i = 1; i < n + 1; i++) {
			if (graph[tmp][i] == true && visited[i] == false) {
				q.push(i);
				visited[i] = true;
			}
		}
	}
}

int main() {
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int s, d;
		cin >> s >> d;
		graph[s][d] = 1;
		graph[d][s] = 1;
	}

	dfs(v);
	cout << endl;
	memset(visited, false, sizeof(visited));
	bfs(v);

	return 0;
}