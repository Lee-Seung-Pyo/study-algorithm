# study-algorithm
환경: C++14, Visual Studio 2019 version 16.4

### 완전 탐색 - BFS, DFS
[BOJ1260 DFS와 BFS](/src/BOJ1260)  
[BOJ2667 단지번호붙이기](/src/BOJ2667)  
[BOJ2178 미로 탐색](/src/BOJ2178)  

### 동적 계획법(DP)
[BOJ1003 피보나치 수열](/src/BOJ1003)  
[BOJ2579 계단 오르기](/src/BOJ2579)  
[BOJ1463 1로 만들기](/src/BOJ1463)  

### 그리디
[BOJ10610 30](/src/BOJ10610)  

### 다익스트라 알고리즘
[BOJ1753 최단경로](/src/BOJ1753)

### 구현
[BOJ10871 X보다 작은 수](/src/BOJ10871)


## 자료구조
#### 배열
[BOJ10808 알파벳 개수](/src/BOJ10808)


## C++ STL 컨테이너
자주 쓰이는 컨테이너들
#### \<string>  
기존의 char[] 문자배열과 같지만 마지막이 '\0'으로 끝나지 않음. 생성자에서 동적할당하고 소멸자에서 해제한다.  
begin(), end() 는 포인터 반환 / front(), back() 은 값 반환

#### \<vector>
자동으로 메모리가 할당되는 배열.  
활용: 그래프 구현할 때 간선이 많으면 행렬, 적으면 vector로 구현

#### \<queue>
queue  
활용: BFS  
priory_queue  
활용: 다익스트라

#### \<algorithm>
sort, max/min, fill 등 유용한 함수들 다수 존재

#### \<climits> (\<limits.h>)
기본 자료형의 최댓/최솟값 존재  
ex) INT_MAX, INT_MIN

## 기타
#### 입출력 속도 빠르게 하기
(https://blog.encrypted.gg/923 표준입출력 참고)
```cpp
#define endl '\n'  // endl은 '개행+출력버퍼 비우기' 이므로 사용x
...
ios::sync_with_stdio(0);  // stdio출력버퍼와 싱크 해제, 원형은 (false)
cin.tie(0);  // cin명령을 수행하기 전에 cout버퍼를 비우지 않음, 원형은 (nullptr)
```