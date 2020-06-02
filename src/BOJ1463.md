## BOJ1463 - 1로 만들기
문제: (https://www.acmicpc.net/problem/1463)

전형적인 DP 문제

P(n): 'n->1 연산 횟수의 최솟값' 이라 할 때,  
P(n) = P(n/3) + 1 (단, n/3은 정수)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;P(n/2) + 1 (단, n/2은 정수)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;P(n-1) + 1  
중 최솟값이다. ( 단, P(1)=0 )

#### 구현 포인트  
1. 배열 동적할당: n의 최댓값이 10^6이기 때문에 stack 메모리에 할당할 수 없다고 떠서, heap 영역에 동적할당 해주었다. (*<b>할당 해제</b> 잊지말 것!)  
```cpp
int* dp = new int[n+1] {0};
// ...
delete[] dp;
```
2. 상황에 따라 달라지는 비교 갯수를 어떻게 처리할 것인가  
    1. if문으로 나누어서, 각각 상황에 따라 min함수를 다르게 호출
    2. 조건에 맞지 않을 경우 min함수에 자료형 최댓값을 넘기기 (비교횟수 감소, 코드 간결)
```cpp
dp[i] = min({(i % 3 == 0) ? (dp[i/3] + 1) : (INT_MAX),
             (i % 2 == 0) ? (dp[i/2] + 1) : (INT_MAX),
             dp[i-1] + 1});
```