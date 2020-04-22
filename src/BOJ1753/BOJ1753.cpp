#include <iostream>
#include <vector>
#include <climits>
#include <queue>

#define MAX_V 20000
#define INF INT_MAX
#define endl '\n'

using namespace std;

int main() {
	int v, e, start;  // ���� ����, ���� ����, ������
	cin >> v >> e >> start;
	vector<pair<int, int>> graph[MAX_V+1];  // graph[����] = (����, ���)

	for (int i = 0; i < e; i++) {
		int from, to, c;
		cin >> from >> to >> c;
		graph[from].push_back(make_pair(to, c));
	}

	int dist[MAX_V + 1];  // start���� �� ������ �ּ� ���
	fill_n(dist, MAX_V + 1, INF);
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;  // (start���� �������� ���µ� ���, ����)
	dist[start] = 0;
	pq.push(make_pair(0, start));
	while (!pq.empty()) {
		// ���� ť���� ���� �ּҺ��
		int cost = pq.top().first;
		int node = pq.top().second;
		pq.pop();

		if (dist[node] >= cost) {  // �ּ� �Ÿ��� �ƴѰ� ����
			dist[node] = cost;  // dist[node] �� Ȯ�� (���� ���� �ߺ�����)
			for (auto tmp : graph[node]) {
				if (dist[tmp.first] > tmp.second + dist[node]) {  // �ش� ������ �ּҰŸ��� ���
					dist[tmp.first] = tmp.second + dist[node];  // �ּҺ�� ������Ʈ���ְ�
					pq.push(make_pair(dist[tmp.first], tmp.first));  // ť�� �־���
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