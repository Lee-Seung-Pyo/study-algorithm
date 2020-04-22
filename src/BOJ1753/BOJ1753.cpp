#include <iostream>
#include <vector>
#include <climits>
#include <queue>

#define MAX_V 20000
#define INF INT_MAX
#define endl '\n'

using namespace std;

int main() {
	int v, e, start;  // 정점 갯수, 간선 갯수, 시작점
	cin >> v >> e >> start;
	vector<pair<int, int>> graph[MAX_V+1];  // graph[정점] = (정점, 비용)

	for (int i = 0; i < e; i++) {
		int from, to, c;
		cin >> from >> to >> c;
		graph[from].push_back(make_pair(to, c));
	}

	int dist[MAX_V + 1];  // start에서 각 노드까지 최소 비용
	fill_n(dist, MAX_V + 1, INF);
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;  // (start에서 정점까지 가는데 비용, 정점)
	dist[start] = 0;
	pq.push(make_pair(0, start));
	while (!pq.empty()) {
		// 현재 큐에서 가장 최소비용
		int cost = pq.top().first;
		int node = pq.top().second;
		pq.pop();

		if (dist[node] >= cost) {  // 최소 거리가 아닌건 무시
			dist[node] = cost;  // dist[node] 값 확정 (같을 때는 중복대입)
			for (auto tmp : graph[node]) {
				if (dist[tmp.first] > tmp.second + dist[node]) {  // 해당 간선이 최소거리일 경우
					dist[tmp.first] = tmp.second + dist[node];  // 최소비용 업데이트해주고
					pq.push(make_pair(dist[tmp.first], tmp.first));  // 큐에 넣어줌
				}
			}
		}
	}

	for (int i = 1; i <= v; i++) {
		if (dist[i] == INF) cout << "INF" << endl;
		else cout << dist[i] << endl;
	}


	return 0;
}