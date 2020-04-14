## BOJ2667 - 단지번호붙이기
문제: (https://www.acmicpc.net/problem/2667)

기본 BFS/DFS 문제  
array outbound exception을 막기위해 행렬에 버퍼를 두었는데 더 세련된 방법이 있는지는 모르겠다.  
*상하좌우 좌표
```cpp
int dx[4] = { 0,0,-1,1 };  // 상하좌우
int dy[4] = { 1,-1,0,0 };  //
```