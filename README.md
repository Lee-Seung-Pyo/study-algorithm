# study-algorithm
ȯ��: C++14, Visual Studio 2019 version 16.4

### ���� Ž�� - BFS, DFS
[BOJ1260 DFS�� BFS](/src/BOJ1260)  
[BOJ2667 ������ȣ���̱�](/src/BOJ2667)  
[BOJ2178 �̷� Ž��](/src/BOJ2178)  

### ���� ��ȹ��(DP)
[BOJ1003 �Ǻ���ġ ����](/src/BOJ1003)  
[BOJ2579 ��� ������](/src/BOJ2579)  
[BOJ1463 1�� �����](/src/BOJ1463)  

### �׸���
[BOJ10610 30](/src/BOJ10610)  

### ���ͽ�Ʈ�� �˰���
[BOJ1753 �ִܰ��](/src/BOJ1753)

### ����
[BOJ10871 X���� ���� ��](/src/BOJ10871)


## �ڷᱸ��
#### �迭
[BOJ10808 ���ĺ� ����](/src/BOJ10808)


## C++ STL �����̳�
���� ���̴� �����̳ʵ�
#### \<string>  
������ char[] ���ڹ迭�� ������ �������� '\0'���� ������ ����. �����ڿ��� �����Ҵ��ϰ� �Ҹ��ڿ��� �����Ѵ�.  
begin(), end() �� ������ ��ȯ / front(), back() �� �� ��ȯ

#### \<vector>
�ڵ����� �޸𸮰� �Ҵ�Ǵ� �迭.  
Ȱ��: �׷��� ������ �� ������ ������ ���, ������ vector�� ����

#### \<queue>
queue  
Ȱ��: BFS  
priory_queue  
Ȱ��: ���ͽ�Ʈ��

#### \<algorithm>
sort, max/min, fill �� ������ �Լ��� �ټ� ����

#### \<climits> (\<limits.h>)
�⺻ �ڷ����� �ִ�/�ּڰ� ����  
ex) INT_MAX, INT_MIN

## ��Ÿ
#### ����� �ӵ� ������ �ϱ�
(https://blog.encrypted.gg/923 ǥ������� ����)
```cpp
#define endl '\n'  // endl�� '����+��¹��� ����' �̹Ƿ� ���x
...
ios::sync_with_stdio(0);  // stdio��¹��ۿ� ��ũ ����, ������ (false)
cin.tie(0);  // cin����� �����ϱ� ���� cout���۸� ����� ����, ������ (nullptr)
```