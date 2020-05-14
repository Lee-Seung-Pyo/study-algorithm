## BOJ1753 - �ִܰ��
����: (https://www.acmicpc.net/problem/1753)

���ͽ�Ʈ�� �˰����� ��������  
������ �����ߴµ� �����ϴ°� ���� ��ƴ�. Ư�� �켱���� ť �̿��ϴ°� �򰥸���. 

<b>�ֿ� ���� ���� 3��</b>
```cpp
vector<pair<int, int>> graph[MAX_V+1];  // graph[����] = (����, ���)
int dist[MAX_V + 1];  // start���� �� ������ �ּ� ���
priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;  // (start���� �������� ���µ� ���, ����) 
```

<b>�׷��� ����</b>  
Vector �迭 vs 2���� �迭  
30��\*2=60�� vs 2��\*2��=4�� <- �޸𸮻�뷮

<b>�迭 0 �̿��� ������ �ʱ�ȭ</b>  
std::fill_n(�迭�̸�, ����, ���� ��)  
```cpp
int dist[MAX_V + 1];  // start���� �� ������ �ּ� ���
fill_n(dist, MAX_V + 1, INF);
```
Ȥ�� ���� �迭�� ���� ��
```cpp
vector<int> distance(vertex, INF);
```
\* memset�� byte ������ �ٲ��ֱ� ������ 0 �ʱ�ȭ�� ���� ���