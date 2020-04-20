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



## C++ STL 컨테이너
<b>string</b>  
문자배열. 생성자에서 동적할당하고 소멸자에서 해제한다.  
begin(),end() 는 포인터 반환 / front(), back() 은 값 반환

<b>vector</b>  
자동으로 메모리가 할당되는 배열.  
활용: 그래프 구현할 때 간선이 많으면 행렬, 적으면 vector로 구현

<b>queue</b>  
활용: BFS

<b>algorithm</b>  
sort, max/min 존재

<b>climits (limits.h)</b>  
기본 자료형의 최댓/최솟값 존재  
ex) INT_MAX, INT_MIN